/*
 * File:   SetSignal.c
 * Author: tamag
 *
 * Created on 2024/05/23
 */
#include "headers/SetSignal.h"

#include <stdio.h>
#include <stdlib.h>

#include "headers/Common.h"
#include "headers/DriveLed.h"

#ifndef CPPUTEST
#include "mcc_generated_files/system/system.h"
#endif

#ifdef CPPUTEST
int SignalStepper = 0;
int CurrentSignalIndex = 0;
#else
static int SignalStepper = 0;
static int CurrentSignalIndex = 0;
#endif

int g_SignalRow[SignalRowLength] = {0, 0, 0, 0};

/**
 * @brief 信号の初期化
 */
void SignalClear(void) {
    SignalStepper = 0;
    CurrentSignalIndex = 0;
    for (int i = 0; i < SignalRowLength; i++) {
        g_SignalRow[i] = 0;
    }
}

/**
 * @brief 出力の選択
 */
int SetOutput(void) {
    int Output = 0;
    int SignalShapeInfo = 0;
    int Threshold = 0;
    static int LocalCount = 0;
    int endflag = 0;

    switch (CurrentSignalIndex) {
        case 0:
        case 1:
        case 2:
            while (endflag == 0) {
                SignalStepper++;
                if (SignalStepper == 1) {
                    Output = 1;
                    endflag = 1;  // break
                } else if (SignalStepper == 2) {
                    Output = 0;
                    endflag = 1;  // break
                    LocalCount = 0;
                } else {
                    SignalShapeInfo = g_SignalRow[CurrentSignalIndex];
                    Threshold = TransrateRefThreshold(SignalShapeInfo);
                    // printf("Threshold:%d, ", Threshold);
                    // printf("LocalCount:%d\n", LocalCount);
                    LocalCount++;
                    if (LocalCount >= Threshold) {
                        if ((CurrentSignalIndex == 0) ||
                            (CurrentSignalIndex ==
                             1)) {  // 次が2 (=ch3)
                                    // ならばSignalStepper=1の処理へ
                            SignalStepper = 0;
                            LocalCount = 0;
                            CurrentSignalIndex++;
                        } else {  // 次が3 (終端信号)ならば1を返す
                            SignalStepper = 0;
                            LocalCount = 0;
                            CurrentSignalIndex++;
                            Output = 1;
                            endflag = 1;
                        }
                    } else {
                        // 一定回数0を返す
                        Output = 0;
                        // printf("delay:%d\n", LocalCount);
                        endflag = 1;  // break
                    }
                }
            }
            break;
        case 3:
            LocalCount++;
            if (LocalCount >= 2) {  // 終端信号は計3回
                CurrentSignalIndex = 0;
            }
            Output = 1;
            break;
        default:
            Output = -1;
            break;
    }
    return Output;
}

/**
 * @brief 入力値に基づいて指定された出力値を返す関数
 *
 * @param input 入力値（-8から8の範囲）
 * @return 指定された出力値（1から17の範囲）
 */
STATIC int TransrateRefThreshold(int SignalRowVal) {
    // 入力値の範囲チェック
    if (SignalRowVal < -8 || SignalRowVal > 8) {
        return -1;  // エラー値を返す
    }
    // 入力値に基づいて出力値を計算
    return SignalRowVal + 9;
}

/**
 * @brief g_SignalRow[]を更新する関数
 */
STATIC void UpdateSignalRow(void) {
    if (g_PitchRefCount > 8) {
        g_PitchRefCount = 8;
    }
    if (g_PitchRefCount < -8) {
        g_PitchRefCount = -8;
    }
    if (g_YawRefCount > 8) {
        g_YawRefCount = 8;
    }
    if (g_YawRefCount < -8) {
        g_YawRefCount = -8;
    }
    if (g_SpeedRefCount > 8) {
        g_SpeedRefCount = 8;
    }
    if (g_SpeedRefCount < -8) {
        g_SpeedRefCount = -8;
    }
    g_SignalRow[0] = g_SpeedRefCount;
    g_SignalRow[1] = g_PitchRefCount;
    g_SignalRow[2] = g_YawRefCount;
    g_SignalRow[3] = 0;
}

/**
 * @brief SetOutput関数に応じてDriveLedを制御する
 */
void CallLedDriveAccordingToSignal(void) {
    int result = SetOutput();
    switch (result) {
        case 1:
            DriveLed(IoON);  // 後日，異常系設計を行う。
            break;
        case 0:
            DriveLed(IoOFF);  // 後日，異常系設計を行う。
            break;
        default:
            break;
    }
}