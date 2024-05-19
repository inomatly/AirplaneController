/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
? [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define SW1_TRIS                 TRISAbits.TRISA0
#define SW1_LAT                  LATAbits.LATA0
#define SW1_PORT                 PORTAbits.RA0
#define SW1_WPU                  WPUAbits.WPUA0
#define SW1_OD                   ODCONAbits.ODCA0
#define SW1_ANS                  ANSELAbits.ANSA0
#define SW1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define SW1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define SW1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define SW1_GetValue()           PORTAbits.RA0
#define SW1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define SW1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define SW1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define SW1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define SW1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define SW1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define SW1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define SW1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)
#define RA0_SetInterruptHandler  SW1_SetInterruptHandler
// get/set IO_RA1 aliases
#define SW2_TRIS                 TRISAbits.TRISA1
#define SW2_LAT                  LATAbits.LATA1
#define SW2_PORT                 PORTAbits.RA1
#define SW2_WPU                  WPUAbits.WPUA1
#define SW2_OD                   ODCONAbits.ODCA1
#define SW2_ANS                  ANSELAbits.ANSA1
#define SW2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define SW2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define SW2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define SW2_GetValue()           PORTAbits.RA1
#define SW2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define SW2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define SW2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define SW2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define SW2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define SW2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define SW2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define SW2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)
#define RA1_SetInterruptHandler  SW2_SetInterruptHandler
// get/set IO_RA2 aliases
#define SW3_TRIS                 TRISAbits.TRISA2
#define SW3_LAT                  LATAbits.LATA2
#define SW3_PORT                 PORTAbits.RA2
#define SW3_WPU                  WPUAbits.WPUA2
#define SW3_OD                   ODCONAbits.ODCA2
#define SW3_ANS                  ANSELAbits.ANSA2
#define SW3_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define SW3_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define SW3_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define SW3_GetValue()           PORTAbits.RA2
#define SW3_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define SW3_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define SW3_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define SW3_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define SW3_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define SW3_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define SW3_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define SW3_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
#define RA2_SetInterruptHandler  SW3_SetInterruptHandler
// get/set IO_RA3 aliases
#define SW4_TRIS                 TRISAbits.TRISA3
#define SW4_LAT                  LATAbits.LATA3
#define SW4_PORT                 PORTAbits.RA3
#define SW4_WPU                  WPUAbits.WPUA3
#define SW4_OD                   ODCONAbits.ODCA3
#define SW4_ANS                  ANSELAbits.ANSA3
#define SW4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define SW4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define SW4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define SW4_GetValue()           PORTAbits.RA3
#define SW4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define SW4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define SW4_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define SW4_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define SW4_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define SW4_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define SW4_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define SW4_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)
#define RA3_SetInterruptHandler  SW4_SetInterruptHandler
// get/set IO_RA4 aliases
#define SW5_TRIS                 TRISAbits.TRISA4
#define SW5_LAT                  LATAbits.LATA4
#define SW5_PORT                 PORTAbits.RA4
#define SW5_WPU                  WPUAbits.WPUA4
#define SW5_OD                   ODCONAbits.ODCA4
#define SW5_ANS                  ANSELAbits.ANSA4
#define SW5_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define SW5_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define SW5_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define SW5_GetValue()           PORTAbits.RA4
#define SW5_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define SW5_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define SW5_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define SW5_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define SW5_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define SW5_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define SW5_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define SW5_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)
#define RA4_SetInterruptHandler  SW5_SetInterruptHandler
// get/set IO_RA5 aliases
#define SW6_TRIS                 TRISAbits.TRISA5
#define SW6_LAT                  LATAbits.LATA5
#define SW6_PORT                 PORTAbits.RA5
#define SW6_WPU                  WPUAbits.WPUA5
#define SW6_OD                   ODCONAbits.ODCA5
#define SW6_ANS                  ANSELAbits.ANSA5
#define SW6_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SW6_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SW6_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SW6_GetValue()           PORTAbits.RA5
#define SW6_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SW6_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SW6_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define SW6_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define SW6_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define SW6_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define SW6_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define SW6_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)
#define RA5_SetInterruptHandler  SW6_SetInterruptHandler
// get/set IO_RA7 aliases
#define SW7_TRIS                 TRISAbits.TRISA7
#define SW7_LAT                  LATAbits.LATA7
#define SW7_PORT                 PORTAbits.RA7
#define SW7_WPU                  WPUAbits.WPUA7
#define SW7_OD                   ODCONAbits.ODCA7
#define SW7_ANS                  ANSELAbits.ANSA7
#define SW7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define SW7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define SW7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define SW7_GetValue()           PORTAbits.RA7
#define SW7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define SW7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define SW7_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define SW7_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define SW7_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define SW7_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define SW7_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define SW7_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)
#define RA7_SetInterruptHandler  SW7_SetInterruptHandler
// get/set IO_RB0 aliases
#define OUT1_TRIS                 TRISBbits.TRISB0
#define OUT1_LAT                  LATBbits.LATB0
#define OUT1_PORT                 PORTBbits.RB0
#define OUT1_WPU                  WPUBbits.WPUB0
#define OUT1_OD                   ODCONBbits.ODCB0
#define OUT1_ANS                  ANSELBbits.ANSB0
#define OUT1_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define OUT1_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define OUT1_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define OUT1_GetValue()           PORTBbits.RB0
#define OUT1_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define OUT1_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define OUT1_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define OUT1_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define OUT1_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define OUT1_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define OUT1_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define OUT1_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)
// get/set IO_RB1 aliases
#define OUT2_TRIS                 TRISBbits.TRISB1
#define OUT2_LAT                  LATBbits.LATB1
#define OUT2_PORT                 PORTBbits.RB1
#define OUT2_WPU                  WPUBbits.WPUB1
#define OUT2_OD                   ODCONBbits.ODCB1
#define OUT2_ANS                  ANSELBbits.ANSB1
#define OUT2_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define OUT2_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define OUT2_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define OUT2_GetValue()           PORTBbits.RB1
#define OUT2_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define OUT2_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define OUT2_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define OUT2_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define OUT2_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define OUT2_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define OUT2_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define OUT2_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)
// get/set IO_RB2 aliases
#define OUT3_TRIS                 TRISBbits.TRISB2
#define OUT3_LAT                  LATBbits.LATB2
#define OUT3_PORT                 PORTBbits.RB2
#define OUT3_WPU                  WPUBbits.WPUB2
#define OUT3_OD                   ODCONBbits.ODCB2
#define OUT3_ANS                  ANSELBbits.ANSB2
#define OUT3_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define OUT3_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define OUT3_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define OUT3_GetValue()           PORTBbits.RB2
#define OUT3_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define OUT3_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define OUT3_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define OUT3_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define OUT3_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define OUT3_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define OUT3_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define OUT3_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)
// get/set IO_RB3 aliases
#define OUT4_TRIS                 TRISBbits.TRISB3
#define OUT4_LAT                  LATBbits.LATB3
#define OUT4_PORT                 PORTBbits.RB3
#define OUT4_WPU                  WPUBbits.WPUB3
#define OUT4_OD                   ODCONBbits.ODCB3
#define OUT4_ANS                  ANSELBbits.ANSB3
#define OUT4_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define OUT4_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define OUT4_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define OUT4_GetValue()           PORTBbits.RB3
#define OUT4_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define OUT4_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define OUT4_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define OUT4_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define OUT4_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define OUT4_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define OUT4_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define OUT4_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)
// get/set IO_RB4 aliases
#define OUT5_TRIS                 TRISBbits.TRISB4
#define OUT5_LAT                  LATBbits.LATB4
#define OUT5_PORT                 PORTBbits.RB4
#define OUT5_WPU                  WPUBbits.WPUB4
#define OUT5_OD                   ODCONBbits.ODCB4
#define OUT5_ANS                  ANSELBbits.ANSB4
#define OUT5_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define OUT5_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define OUT5_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define OUT5_GetValue()           PORTBbits.RB4
#define OUT5_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define OUT5_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define OUT5_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define OUT5_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define OUT5_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define OUT5_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define OUT5_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define OUT5_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
// get/set IO_RB5 aliases
#define OUT6_TRIS                 TRISBbits.TRISB5
#define OUT6_LAT                  LATBbits.LATB5
#define OUT6_PORT                 PORTBbits.RB5
#define OUT6_WPU                  WPUBbits.WPUB5
#define OUT6_OD                   ODCONBbits.ODCB5
#define OUT6_ANS                  ANSELBbits.ANSB5
#define OUT6_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define OUT6_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define OUT6_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define OUT6_GetValue()           PORTBbits.RB5
#define OUT6_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define OUT6_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define OUT6_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define OUT6_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define OUT6_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define OUT6_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define OUT6_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define OUT6_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)
// get/set IO_RB6 aliases
#define OUT7_TRIS                 TRISBbits.TRISB6
#define OUT7_LAT                  LATBbits.LATB6
#define OUT7_PORT                 PORTBbits.RB6
#define OUT7_WPU                  WPUBbits.WPUB6
#define OUT7_OD                   ODCONBbits.ODCB6
#define OUT7_ANS                  ANSELBbits.ANSB6
#define OUT7_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define OUT7_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define OUT7_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define OUT7_GetValue()           PORTBbits.RB6
#define OUT7_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define OUT7_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define OUT7_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define OUT7_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define OUT7_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define OUT7_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define OUT7_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define OUT7_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)
// get/set IO_RB7 aliases
#define OUT8_TRIS                 TRISBbits.TRISB7
#define OUT8_LAT                  LATBbits.LATB7
#define OUT8_PORT                 PORTBbits.RB7
#define OUT8_WPU                  WPUBbits.WPUB7
#define OUT8_OD                   ODCONBbits.ODCB7
#define OUT8_ANS                  ANSELBbits.ANSB7
#define OUT8_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define OUT8_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define OUT8_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define OUT8_GetValue()           PORTBbits.RB7
#define OUT8_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define OUT8_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define OUT8_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define OUT8_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define OUT8_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define OUT8_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define OUT8_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define OUT8_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)
// get/set IO_RC0 aliases
#define OUT9_TRIS                 TRISCbits.TRISC0
#define OUT9_LAT                  LATCbits.LATC0
#define OUT9_PORT                 PORTCbits.RC0
#define OUT9_WPU                  WPUCbits.WPUC0
#define OUT9_OD                   ODCONCbits.ODCC0
#define OUT9_ANS                  ANSELCbits.ANSC0
#define OUT9_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define OUT9_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define OUT9_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define OUT9_GetValue()           PORTCbits.RC0
#define OUT9_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define OUT9_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define OUT9_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define OUT9_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define OUT9_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define OUT9_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define OUT9_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define OUT9_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
// get/set IO_RC1 aliases
#define OUT10_TRIS                 TRISCbits.TRISC1
#define OUT10_LAT                  LATCbits.LATC1
#define OUT10_PORT                 PORTCbits.RC1
#define OUT10_WPU                  WPUCbits.WPUC1
#define OUT10_OD                   ODCONCbits.ODCC1
#define OUT10_ANS                  ANSELCbits.ANSC1
#define OUT10_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define OUT10_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define OUT10_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define OUT10_GetValue()           PORTCbits.RC1
#define OUT10_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define OUT10_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define OUT10_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define OUT10_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define OUT10_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define OUT10_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define OUT10_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define OUT10_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SW1 pin functionality
 * @param none
 * @return none
 */
void SW1_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SW1 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SW1 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SW1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SW1 pin.
 *        This is a dynamic interrupt handler to be used together with the SW1_SetInterruptHandler() method.
 *        This handler is called every time the SW1 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SW1_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SW1 pin. 
 *        This is a predefined interrupt handler to be used together with the SW1_SetInterruptHandler() method.
 *        This handler is called every time the SW1 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SW1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SW2 pin functionality
 * @param none
 * @return none
 */
void SW2_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SW2 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SW2 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SW2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SW2 pin.
 *        This is a dynamic interrupt handler to be used together with the SW2_SetInterruptHandler() method.
 *        This handler is called every time the SW2 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SW2_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SW2 pin. 
 *        This is a predefined interrupt handler to be used together with the SW2_SetInterruptHandler() method.
 *        This handler is called every time the SW2 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SW2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SW3 pin functionality
 * @param none
 * @return none
 */
void SW3_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SW3 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SW3 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SW3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SW3 pin.
 *        This is a dynamic interrupt handler to be used together with the SW3_SetInterruptHandler() method.
 *        This handler is called every time the SW3 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SW3_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SW3 pin. 
 *        This is a predefined interrupt handler to be used together with the SW3_SetInterruptHandler() method.
 *        This handler is called every time the SW3 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SW3_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SW4 pin functionality
 * @param none
 * @return none
 */
void SW4_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SW4 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SW4 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SW4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SW4 pin.
 *        This is a dynamic interrupt handler to be used together with the SW4_SetInterruptHandler() method.
 *        This handler is called every time the SW4 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SW4_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SW4 pin. 
 *        This is a predefined interrupt handler to be used together with the SW4_SetInterruptHandler() method.
 *        This handler is called every time the SW4 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SW4_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SW5 pin functionality
 * @param none
 * @return none
 */
void SW5_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SW5 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SW5 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SW5_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SW5 pin.
 *        This is a dynamic interrupt handler to be used together with the SW5_SetInterruptHandler() method.
 *        This handler is called every time the SW5 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SW5_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SW5 pin. 
 *        This is a predefined interrupt handler to be used together with the SW5_SetInterruptHandler() method.
 *        This handler is called every time the SW5 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SW5_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SW6 pin functionality
 * @param none
 * @return none
 */
void SW6_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SW6 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SW6 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SW6_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SW6 pin.
 *        This is a dynamic interrupt handler to be used together with the SW6_SetInterruptHandler() method.
 *        This handler is called every time the SW6 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SW6_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SW6 pin. 
 *        This is a predefined interrupt handler to be used together with the SW6_SetInterruptHandler() method.
 *        This handler is called every time the SW6 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SW6_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SW7 pin functionality
 * @param none
 * @return none
 */
void SW7_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SW7 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SW7 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SW7_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SW7 pin.
 *        This is a dynamic interrupt handler to be used together with the SW7_SetInterruptHandler() method.
 *        This handler is called every time the SW7 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SW7_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SW7 pin. 
 *        This is a predefined interrupt handler to be used together with the SW7_SetInterruptHandler() method.
 *        This handler is called every time the SW7 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SW7_DefaultInterruptHandler(void);


#endif // PINS_H
/**
 End of File
*/