/*
 * File:   SwitchInput.c
 * Author: tamag
 *
 * Created on 2024/05/22
 */

#ifndef SWITCHINPUT_H
#define SWITCHINPUT_H

extern int g_SpeedRefCount;
extern int g_PitchRefCount;
extern int g_YawRefCount;

void UpdateSpeedUP(void);
void UpdateSpeedDown(void);
void UpdatePitchUP(void);
void UpdatePitchDown(void);
void UpdateYawUP(void);
void UpdateYawDown(void);
#endif  // SWITCHINPUT_H