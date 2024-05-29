/*
 * File:   SetSignal.c
 * Author: tamag
 *
 * Created on 2024/05/23
 */

#ifndef SETSIGNAL_H
#define SETSIGNAL_H

#include "Common.h"
#include "SwitchInput.h"

#define ROWSIZE 20
#define SignalRowLength 4

#ifdef CPPUTEST
extern int SignalStepper;
extern int CurrentSignalIndex;
#endif

int TransrateRefThreshold(int);
extern int g_SignalRow[SignalRowLength];
void CallLedDriveAccordingToSignal(void);
void SignalClear(void);
int SetOutput(void);
void UpdateSignalRow(void);
#endif  // SETSIGNAL_H