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
#define DEBUG_LED_TRIS                 TRISAbits.TRISA0
#define DEBUG_LED_LAT                  LATAbits.LATA0
#define DEBUG_LED_PORT                 PORTAbits.RA0
#define DEBUG_LED_WPU                  WPUAbits.WPUA0
#define DEBUG_LED_OD                   ODCONAbits.ODCA0
#define DEBUG_LED_ANS                  ANSELAbits.ANSA0
#define DEBUG_LED_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define DEBUG_LED_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define DEBUG_LED_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define DEBUG_LED_GetValue()           PORTAbits.RA0
#define DEBUG_LED_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define DEBUG_LED_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define DEBUG_LED_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define DEBUG_LED_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define DEBUG_LED_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define DEBUG_LED_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define DEBUG_LED_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define DEBUG_LED_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)
// get/set IO_RA1 aliases
#define DC_P1_TRIS                 TRISAbits.TRISA1
#define DC_P1_LAT                  LATAbits.LATA1
#define DC_P1_PORT                 PORTAbits.RA1
#define DC_P1_WPU                  WPUAbits.WPUA1
#define DC_P1_OD                   ODCONAbits.ODCA1
#define DC_P1_ANS                  ANSELAbits.ANSA1
#define DC_P1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define DC_P1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define DC_P1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define DC_P1_GetValue()           PORTAbits.RA1
#define DC_P1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define DC_P1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define DC_P1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define DC_P1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define DC_P1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define DC_P1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define DC_P1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define DC_P1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)
#define RA1_SetInterruptHandler  DC_P1_SetInterruptHandler
// get/set IO_RA2 aliases
#define DC_P2_TRIS                 TRISAbits.TRISA2
#define DC_P2_LAT                  LATAbits.LATA2
#define DC_P2_PORT                 PORTAbits.RA2
#define DC_P2_WPU                  WPUAbits.WPUA2
#define DC_P2_OD                   ODCONAbits.ODCA2
#define DC_P2_ANS                  ANSELAbits.ANSA2
#define DC_P2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define DC_P2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define DC_P2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define DC_P2_GetValue()           PORTAbits.RA2
#define DC_P2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define DC_P2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define DC_P2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define DC_P2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define DC_P2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define DC_P2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define DC_P2_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define DC_P2_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
#define RA2_SetInterruptHandler  DC_P2_SetInterruptHandler
// get/set IO_RA3 aliases
#define DC_N1_TRIS                 TRISAbits.TRISA3
#define DC_N1_LAT                  LATAbits.LATA3
#define DC_N1_PORT                 PORTAbits.RA3
#define DC_N1_WPU                  WPUAbits.WPUA3
#define DC_N1_OD                   ODCONAbits.ODCA3
#define DC_N1_ANS                  ANSELAbits.ANSA3
#define DC_N1_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define DC_N1_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define DC_N1_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define DC_N1_GetValue()           PORTAbits.RA3
#define DC_N1_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define DC_N1_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define DC_N1_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define DC_N1_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define DC_N1_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define DC_N1_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define DC_N1_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define DC_N1_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)
#define RA3_SetInterruptHandler  DC_N1_SetInterruptHandler
// get/set IO_RA4 aliases
#define DC_N2_TRIS                 TRISAbits.TRISA4
#define DC_N2_LAT                  LATAbits.LATA4
#define DC_N2_PORT                 PORTAbits.RA4
#define DC_N2_WPU                  WPUAbits.WPUA4
#define DC_N2_OD                   ODCONAbits.ODCA4
#define DC_N2_ANS                  ANSELAbits.ANSA4
#define DC_N2_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define DC_N2_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define DC_N2_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define DC_N2_GetValue()           PORTAbits.RA4
#define DC_N2_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define DC_N2_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define DC_N2_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define DC_N2_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define DC_N2_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define DC_N2_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define DC_N2_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define DC_N2_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)
#define RA4_SetInterruptHandler  DC_N2_SetInterruptHandler
// get/set IO_RB1 aliases
#define OUT7_TRIS                 TRISBbits.TRISB1
#define OUT7_LAT                  LATBbits.LATB1
#define OUT7_PORT                 PORTBbits.RB1
#define OUT7_WPU                  WPUBbits.WPUB1
#define OUT7_OD                   ODCONBbits.ODCB1
#define OUT7_ANS                  ANSELBbits.ANSB1
#define OUT7_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define OUT7_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define OUT7_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define OUT7_GetValue()           PORTBbits.RB1
#define OUT7_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define OUT7_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define OUT7_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define OUT7_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define OUT7_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define OUT7_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define OUT7_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define OUT7_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)
// get/set IO_RB2 aliases
#define OUT6_TRIS                 TRISBbits.TRISB2
#define OUT6_LAT                  LATBbits.LATB2
#define OUT6_PORT                 PORTBbits.RB2
#define OUT6_WPU                  WPUBbits.WPUB2
#define OUT6_OD                   ODCONBbits.ODCB2
#define OUT6_ANS                  ANSELBbits.ANSB2
#define OUT6_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define OUT6_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define OUT6_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define OUT6_GetValue()           PORTBbits.RB2
#define OUT6_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define OUT6_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define OUT6_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define OUT6_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define OUT6_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define OUT6_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define OUT6_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define OUT6_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)
// get/set IO_RB3 aliases
#define OUT5_TRIS                 TRISBbits.TRISB3
#define OUT5_LAT                  LATBbits.LATB3
#define OUT5_PORT                 PORTBbits.RB3
#define OUT5_WPU                  WPUBbits.WPUB3
#define OUT5_OD                   ODCONBbits.ODCB3
#define OUT5_ANS                  ANSELBbits.ANSB3
#define OUT5_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define OUT5_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define OUT5_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define OUT5_GetValue()           PORTBbits.RB3
#define OUT5_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define OUT5_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define OUT5_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define OUT5_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define OUT5_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define OUT5_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define OUT5_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define OUT5_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)
// get/set IO_RB4 aliases
#define OUT4_TRIS                 TRISBbits.TRISB4
#define OUT4_LAT                  LATBbits.LATB4
#define OUT4_PORT                 PORTBbits.RB4
#define OUT4_WPU                  WPUBbits.WPUB4
#define OUT4_OD                   ODCONBbits.ODCB4
#define OUT4_ANS                  ANSELBbits.ANSB4
#define OUT4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define OUT4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define OUT4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define OUT4_GetValue()           PORTBbits.RB4
#define OUT4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define OUT4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define OUT4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define OUT4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define OUT4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define OUT4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define OUT4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define OUT4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
// get/set IO_RB5 aliases
#define OUT3_TRIS                 TRISBbits.TRISB5
#define OUT3_LAT                  LATBbits.LATB5
#define OUT3_PORT                 PORTBbits.RB5
#define OUT3_WPU                  WPUBbits.WPUB5
#define OUT3_OD                   ODCONBbits.ODCB5
#define OUT3_ANS                  ANSELBbits.ANSB5
#define OUT3_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define OUT3_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define OUT3_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define OUT3_GetValue()           PORTBbits.RB5
#define OUT3_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define OUT3_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define OUT3_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define OUT3_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define OUT3_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define OUT3_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define OUT3_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define OUT3_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)
// get/set IO_RB6 aliases
#define OUT2_TRIS                 TRISBbits.TRISB6
#define OUT2_LAT                  LATBbits.LATB6
#define OUT2_PORT                 PORTBbits.RB6
#define OUT2_WPU                  WPUBbits.WPUB6
#define OUT2_OD                   ODCONBbits.ODCB6
#define OUT2_ANS                  ANSELBbits.ANSB6
#define OUT2_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define OUT2_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define OUT2_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define OUT2_GetValue()           PORTBbits.RB6
#define OUT2_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define OUT2_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define OUT2_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define OUT2_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define OUT2_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define OUT2_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define OUT2_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define OUT2_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)
// get/set IO_RB7 aliases
#define OUT1_TRIS                 TRISBbits.TRISB7
#define OUT1_LAT                  LATBbits.LATB7
#define OUT1_PORT                 PORTBbits.RB7
#define OUT1_WPU                  WPUBbits.WPUB7
#define OUT1_OD                   ODCONBbits.ODCB7
#define OUT1_ANS                  ANSELBbits.ANSB7
#define OUT1_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define OUT1_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define OUT1_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define OUT1_GetValue()           PORTBbits.RB7
#define OUT1_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define OUT1_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define OUT1_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define OUT1_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define OUT1_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define OUT1_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define OUT1_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define OUT1_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)
// get/set IO_RC0 aliases
#define SvA_P1_TRIS                 TRISCbits.TRISC0
#define SvA_P1_LAT                  LATCbits.LATC0
#define SvA_P1_PORT                 PORTCbits.RC0
#define SvA_P1_WPU                  WPUCbits.WPUC0
#define SvA_P1_OD                   ODCONCbits.ODCC0
#define SvA_P1_ANS                  ANSELCbits.ANSC0
#define SvA_P1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SvA_P1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SvA_P1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SvA_P1_GetValue()           PORTCbits.RC0
#define SvA_P1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SvA_P1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SvA_P1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define SvA_P1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define SvA_P1_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define SvA_P1_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define SvA_P1_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define SvA_P1_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
#define RC0_SetInterruptHandler  SvA_P1_SetInterruptHandler
// get/set IO_RC1 aliases
#define SvA_P2_TRIS                 TRISCbits.TRISC1
#define SvA_P2_LAT                  LATCbits.LATC1
#define SvA_P2_PORT                 PORTCbits.RC1
#define SvA_P2_WPU                  WPUCbits.WPUC1
#define SvA_P2_OD                   ODCONCbits.ODCC1
#define SvA_P2_ANS                  ANSELCbits.ANSC1
#define SvA_P2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SvA_P2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SvA_P2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SvA_P2_GetValue()           PORTCbits.RC1
#define SvA_P2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SvA_P2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SvA_P2_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SvA_P2_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SvA_P2_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define SvA_P2_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define SvA_P2_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define SvA_P2_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)
#define RC1_SetInterruptHandler  SvA_P2_SetInterruptHandler
// get/set IO_RC2 aliases
#define SvA_N1_TRIS                 TRISCbits.TRISC2
#define SvA_N1_LAT                  LATCbits.LATC2
#define SvA_N1_PORT                 PORTCbits.RC2
#define SvA_N1_WPU                  WPUCbits.WPUC2
#define SvA_N1_OD                   ODCONCbits.ODCC2
#define SvA_N1_ANS                  ANSELCbits.ANSC2
#define SvA_N1_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define SvA_N1_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define SvA_N1_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define SvA_N1_GetValue()           PORTCbits.RC2
#define SvA_N1_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define SvA_N1_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define SvA_N1_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define SvA_N1_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define SvA_N1_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define SvA_N1_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define SvA_N1_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define SvA_N1_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)
#define RC2_SetInterruptHandler  SvA_N1_SetInterruptHandler
// get/set IO_RC3 aliases
#define SvA_N2_TRIS                 TRISCbits.TRISC3
#define SvA_N2_LAT                  LATCbits.LATC3
#define SvA_N2_PORT                 PORTCbits.RC3
#define SvA_N2_WPU                  WPUCbits.WPUC3
#define SvA_N2_OD                   ODCONCbits.ODCC3
#define SvA_N2_ANS                  ANSELCbits.ANSC3
#define SvA_N2_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SvA_N2_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SvA_N2_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SvA_N2_GetValue()           PORTCbits.RC3
#define SvA_N2_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SvA_N2_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SvA_N2_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SvA_N2_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SvA_N2_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SvA_N2_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SvA_N2_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SvA_N2_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
#define RC3_SetInterruptHandler  SvA_N2_SetInterruptHandler
// get/set IO_RC4 aliases
#define SvB_N2_TRIS                 TRISCbits.TRISC4
#define SvB_N2_LAT                  LATCbits.LATC4
#define SvB_N2_PORT                 PORTCbits.RC4
#define SvB_N2_WPU                  WPUCbits.WPUC4
#define SvB_N2_OD                   ODCONCbits.ODCC4
#define SvB_N2_ANS                  ANSELCbits.ANSC4
#define SvB_N2_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SvB_N2_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SvB_N2_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SvB_N2_GetValue()           PORTCbits.RC4
#define SvB_N2_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SvB_N2_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SvB_N2_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SvB_N2_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SvB_N2_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define SvB_N2_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define SvB_N2_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define SvB_N2_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)
#define RC4_SetInterruptHandler  SvB_N2_SetInterruptHandler
// get/set IO_RC5 aliases
#define SvB_N1_TRIS                 TRISCbits.TRISC5
#define SvB_N1_LAT                  LATCbits.LATC5
#define SvB_N1_PORT                 PORTCbits.RC5
#define SvB_N1_WPU                  WPUCbits.WPUC5
#define SvB_N1_OD                   ODCONCbits.ODCC5
#define SvB_N1_ANS                  ANSELCbits.ANSC5
#define SvB_N1_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define SvB_N1_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define SvB_N1_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define SvB_N1_GetValue()           PORTCbits.RC5
#define SvB_N1_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define SvB_N1_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define SvB_N1_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define SvB_N1_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define SvB_N1_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define SvB_N1_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define SvB_N1_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define SvB_N1_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)
#define RC5_SetInterruptHandler  SvB_N1_SetInterruptHandler
// get/set IO_RC6 aliases
#define SvB_P2_TRIS                 TRISCbits.TRISC6
#define SvB_P2_LAT                  LATCbits.LATC6
#define SvB_P2_PORT                 PORTCbits.RC6
#define SvB_P2_WPU                  WPUCbits.WPUC6
#define SvB_P2_OD                   ODCONCbits.ODCC6
#define SvB_P2_ANS                  ANSELCbits.ANSC6
#define SvB_P2_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define SvB_P2_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define SvB_P2_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define SvB_P2_GetValue()           PORTCbits.RC6
#define SvB_P2_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define SvB_P2_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define SvB_P2_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define SvB_P2_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define SvB_P2_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define SvB_P2_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define SvB_P2_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define SvB_P2_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)
#define RC6_SetInterruptHandler  SvB_P2_SetInterruptHandler
// get/set IO_RC7 aliases
#define SvB_P1_TRIS                 TRISCbits.TRISC7
#define SvB_P1_LAT                  LATCbits.LATC7
#define SvB_P1_PORT                 PORTCbits.RC7
#define SvB_P1_WPU                  WPUCbits.WPUC7
#define SvB_P1_OD                   ODCONCbits.ODCC7
#define SvB_P1_ANS                  ANSELCbits.ANSC7
#define SvB_P1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define SvB_P1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define SvB_P1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define SvB_P1_GetValue()           PORTCbits.RC7
#define SvB_P1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define SvB_P1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define SvB_P1_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define SvB_P1_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define SvB_P1_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define SvB_P1_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define SvB_P1_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define SvB_P1_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)
#define RC7_SetInterruptHandler  SvB_P1_SetInterruptHandler
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
 * @brief Interrupt on Change Handler for the DC_P1 pin functionality
 * @param none
 * @return none
 */
void DC_P1_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for DC_P1 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for DC_P1 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void DC_P1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for DC_P1 pin.
 *        This is a dynamic interrupt handler to be used together with the DC_P1_SetInterruptHandler() method.
 *        This handler is called every time the DC_P1 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*DC_P1_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for DC_P1 pin. 
 *        This is a predefined interrupt handler to be used together with the DC_P1_SetInterruptHandler() method.
 *        This handler is called every time the DC_P1 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void DC_P1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the DC_P2 pin functionality
 * @param none
 * @return none
 */
void DC_P2_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for DC_P2 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for DC_P2 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void DC_P2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for DC_P2 pin.
 *        This is a dynamic interrupt handler to be used together with the DC_P2_SetInterruptHandler() method.
 *        This handler is called every time the DC_P2 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*DC_P2_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for DC_P2 pin. 
 *        This is a predefined interrupt handler to be used together with the DC_P2_SetInterruptHandler() method.
 *        This handler is called every time the DC_P2 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void DC_P2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the DC_N1 pin functionality
 * @param none
 * @return none
 */
void DC_N1_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for DC_N1 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for DC_N1 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void DC_N1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for DC_N1 pin.
 *        This is a dynamic interrupt handler to be used together with the DC_N1_SetInterruptHandler() method.
 *        This handler is called every time the DC_N1 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*DC_N1_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for DC_N1 pin. 
 *        This is a predefined interrupt handler to be used together with the DC_N1_SetInterruptHandler() method.
 *        This handler is called every time the DC_N1 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void DC_N1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the DC_N2 pin functionality
 * @param none
 * @return none
 */
void DC_N2_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for DC_N2 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for DC_N2 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void DC_N2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for DC_N2 pin.
 *        This is a dynamic interrupt handler to be used together with the DC_N2_SetInterruptHandler() method.
 *        This handler is called every time the DC_N2 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*DC_N2_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for DC_N2 pin. 
 *        This is a predefined interrupt handler to be used together with the DC_N2_SetInterruptHandler() method.
 *        This handler is called every time the DC_N2 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void DC_N2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SvA_P1 pin functionality
 * @param none
 * @return none
 */
void SvA_P1_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SvA_P1 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SvA_P1 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SvA_P1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SvA_P1 pin.
 *        This is a dynamic interrupt handler to be used together with the SvA_P1_SetInterruptHandler() method.
 *        This handler is called every time the SvA_P1 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SvA_P1_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SvA_P1 pin. 
 *        This is a predefined interrupt handler to be used together with the SvA_P1_SetInterruptHandler() method.
 *        This handler is called every time the SvA_P1 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SvA_P1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SvA_P2 pin functionality
 * @param none
 * @return none
 */
void SvA_P2_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SvA_P2 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SvA_P2 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SvA_P2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SvA_P2 pin.
 *        This is a dynamic interrupt handler to be used together with the SvA_P2_SetInterruptHandler() method.
 *        This handler is called every time the SvA_P2 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SvA_P2_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SvA_P2 pin. 
 *        This is a predefined interrupt handler to be used together with the SvA_P2_SetInterruptHandler() method.
 *        This handler is called every time the SvA_P2 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SvA_P2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SvA_N1 pin functionality
 * @param none
 * @return none
 */
void SvA_N1_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SvA_N1 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SvA_N1 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SvA_N1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SvA_N1 pin.
 *        This is a dynamic interrupt handler to be used together with the SvA_N1_SetInterruptHandler() method.
 *        This handler is called every time the SvA_N1 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SvA_N1_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SvA_N1 pin. 
 *        This is a predefined interrupt handler to be used together with the SvA_N1_SetInterruptHandler() method.
 *        This handler is called every time the SvA_N1 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SvA_N1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SvA_N2 pin functionality
 * @param none
 * @return none
 */
void SvA_N2_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SvA_N2 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SvA_N2 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SvA_N2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SvA_N2 pin.
 *        This is a dynamic interrupt handler to be used together with the SvA_N2_SetInterruptHandler() method.
 *        This handler is called every time the SvA_N2 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SvA_N2_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SvA_N2 pin. 
 *        This is a predefined interrupt handler to be used together with the SvA_N2_SetInterruptHandler() method.
 *        This handler is called every time the SvA_N2 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SvA_N2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SvB_N2 pin functionality
 * @param none
 * @return none
 */
void SvB_N2_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SvB_N2 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SvB_N2 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SvB_N2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SvB_N2 pin.
 *        This is a dynamic interrupt handler to be used together with the SvB_N2_SetInterruptHandler() method.
 *        This handler is called every time the SvB_N2 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SvB_N2_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SvB_N2 pin. 
 *        This is a predefined interrupt handler to be used together with the SvB_N2_SetInterruptHandler() method.
 *        This handler is called every time the SvB_N2 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SvB_N2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SvB_N1 pin functionality
 * @param none
 * @return none
 */
void SvB_N1_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SvB_N1 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SvB_N1 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SvB_N1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SvB_N1 pin.
 *        This is a dynamic interrupt handler to be used together with the SvB_N1_SetInterruptHandler() method.
 *        This handler is called every time the SvB_N1 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SvB_N1_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SvB_N1 pin. 
 *        This is a predefined interrupt handler to be used together with the SvB_N1_SetInterruptHandler() method.
 *        This handler is called every time the SvB_N1 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SvB_N1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SvB_P2 pin functionality
 * @param none
 * @return none
 */
void SvB_P2_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SvB_P2 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SvB_P2 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SvB_P2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SvB_P2 pin.
 *        This is a dynamic interrupt handler to be used together with the SvB_P2_SetInterruptHandler() method.
 *        This handler is called every time the SvB_P2 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SvB_P2_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SvB_P2 pin. 
 *        This is a predefined interrupt handler to be used together with the SvB_P2_SetInterruptHandler() method.
 *        This handler is called every time the SvB_P2 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SvB_P2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handler for the SvB_P1 pin functionality
 * @param none
 * @return none
 */
void SvB_P1_ISR(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SvB_P1 pin interrupt-on-change functionality.
 *        Allows selecting an interrupt handler for SvB_P1 at application runtime.
 * @pre Pins intializer called
 * @param InterruptHandler function pointer.
 * @return none
 */
void SvB_P1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
 * @ingroup  pinsdriver
 * @brief Dynamic Interrupt Handler for SvB_P1 pin.
 *        This is a dynamic interrupt handler to be used together with the SvB_P1_SetInterruptHandler() method.
 *        This handler is called every time the SvB_P1 ISR is executed and allows any function to be registered at runtime.
 * @pre Pins intializer called
 * @param none
 * @return none
 */
extern void (*SvB_P1_InterruptHandler)(void);

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SvB_P1 pin. 
 *        This is a predefined interrupt handler to be used together with the SvB_P1_SetInterruptHandler() method.
 *        This handler is called every time the SvB_P1 ISR is executed. 
 * @pre Pins intializer called
 * @param none
 * @return none
 */
void SvB_P1_DefaultInterruptHandler(void);


#endif // PINS_H
/**
 End of File
*/