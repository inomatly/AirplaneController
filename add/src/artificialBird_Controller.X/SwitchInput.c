/*
 * File:   SwitchInput.c
 * Author: tamag
 *
 * Created on 2024/05/22
 */
#include "headers/SwitchInput.h"

#include <stdio.h>
#include <stdlib.h>

#ifndef CPPUTEST
#include "mcc_generated_files/system/system.h"
#endif

int g_SpeedRefCount = 0;
int g_PitchRefCount = 0;
int g_YawRefCount = 0;

/**
 * @brief ピッチの基準値g_PitchRefCountを増加させる関数
 */
void UpdatePitchUP(void) {
    g_PitchRefCount++;
    // 後日，カウンターの上限を設定する
}

/**
 * @brief ピッチの基準値g_PitchRefCountを減少させる関数
 */
void UpdatePitchDown(void) {
    g_PitchRefCount--;
    // 後日，カウンターの下限を設定する
}

/**
 * @brief ヨーの基準値g_YawRefCountを増加させる関数
 */
void UpdateYawUP(void) {
    g_YawRefCount++;
    // 後日，カウンターの上限を設定する
}

/**
 * @brief ヨーの基準値g_YawRefCountを減少させる関数
 */
void UpdateYawDown(void) {
    g_YawRefCount--;
    // 後日，カウンターの下限を設定する
}

/**
 * @brief スピードの基準値g_SpeedRefCountを増加させる関数
 */
void UpdateSpeedUP(void) {
    g_SpeedRefCount++;
    // 後日，カウンターの上限を設定する
}

/**
 * @brief スピードの基準値g_SpeedRefCountを減少させる関数
 */
void UpdateSpeedDown(void) {
    g_SpeedRefCount--;
    // 後日，カウンターの下限を設定する
}