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
    if (g_PitchRefCount > 8) {
        g_PitchRefCount = 8;
    }
}

/**
 * @brief ピッチの基準値g_PitchRefCountを減少させる関数
 */
void UpdatePitchDown(void) {
    g_PitchRefCount--;
    if (g_PitchRefCount < -8) {
        g_PitchRefCount = -8;
    }
}

/**
 * @brief ヨーの基準値g_YawRefCountを増加させる関数
 */
void UpdateYawUP(void) {
    g_YawRefCount++;
    if (g_YawRefCount > 8) {
        g_YawRefCount = 8;
    }
}

/**
 * @brief ヨーの基準値g_YawRefCountを減少させる関数
 */
void UpdateYawDown(void) {
    g_YawRefCount--;
    if (g_YawRefCount < -8) {
        g_YawRefCount = -8;
    }
}

/**
 * @brief スピードの基準値g_SpeedRefCountを増加させる関数
 */
void UpdateSpeedUP(void) {
    g_SpeedRefCount++;
    if (g_SpeedRefCount > 8) {
        g_SpeedRefCount = 8;
    }
}

/**
 * @brief スピードの基準値g_SpeedRefCountを減少させる関数
 */
void UpdateSpeedDown(void) {
    g_SpeedRefCount--;
    if (g_SpeedRefCount < -8) {
        g_SpeedRefCount = -8;
    }
}