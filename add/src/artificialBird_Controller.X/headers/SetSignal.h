/*
 * File:   SetSignal.c
 * Author: tamag
 *
 * Created on 2024/05/23
 */

#ifndef SETSIGNAL_H
#define SETSIGNAL_H

#include "src/artificialBird_Controller.X/headers/Common.h"
#include "src/artificialBird_Controller.X/headers/SwitchInput.h"

#define ROWSIZE 20
#define SignalRowLength 4

#ifdef CPPUTEST
extern int SignalStepper;
extern int CurrentSignalIndex;
int TransrateRefThreshold(int);
#endif

extern int g_SignalRow[SignalRowLength];

void SignalClear(void);
int SetOutput(void);
STATIC void UpdateSignalRow(void);
#endif  // SETSIGNAL_H