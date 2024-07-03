/**
 * Generated Driver File
 *
 * @file pins.c
 *
 * @ingroup  pinsdriver
 *
 * @brief This is generated driver implementation for pins.
 *        This file provides implementations for pin APIs for all pins selected
 * in the GUI.
 *
 * @version Driver Version 3.0.0
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

#include "../pins.h"
#include "../../../headers/DriveLed.h"
#include "../../../headers/SwitchInput.h"

void (*DC_P1_InterruptHandler)(void);
void (*DC_P2_InterruptHandler)(void);
void (*DC_N1_InterruptHandler)(void);
void (*DC_N2_InterruptHandler)(void);
void (*SvA_P1_InterruptHandler)(void);
void (*SvA_P2_InterruptHandler)(void);
void (*SvA_N1_InterruptHandler)(void);
void (*SvA_N2_InterruptHandler)(void);
void (*SvB_N2_InterruptHandler)(void);
void (*SvB_N1_InterruptHandler)(void);
void (*SvB_P2_InterruptHandler)(void);
void (*SvB_P1_InterruptHandler)(void);

void PIN_MANAGER_Initialize(void)
{
    /**
     LATx registers
     */
    LATA = 0x0;
    LATB = 0x0;
    LATC = 0x0;

    /**
    TRISx registers
    */
    TRISA = 0xFE;
    TRISB = 0x1;
    TRISC = 0xFF;

    /**
    ANSELx registers
    */
    ANSELA = 0xE0;
    ANSELB = 0x1;
    ANSELC = 0x0;

    /**
    WPUx registers
    */
    WPUA = 0x1E;
    WPUB = 0x0;
    WPUC = 0xFF;
    WPUE = 0x0;

    /**
    ODx registers
    */

    ODCONA = 0x0;
    ODCONB = 0x0;
    ODCONC = 0x0;
    /**
    SLRCONx registers
    */
    SLRCONA = 0xFF;
    SLRCONB = 0xFF;
    SLRCONC = 0xFF;
    /**
    INLVLx registers
    */
    INLVLA = 0xFF;
    INLVLB = 0xFF;
    INLVLC = 0xFF;
    INLVLE = 0x8;

    /**
    PPS registers
    */

    /**
    APFCON registers
    */

    /**
     IOCx registers
     */
    IOCAP = 0x1E;
    IOCAN = 0x0;
    IOCAF = 0x0;
    IOCBP = 0x0;
    IOCBN = 0x0;
    IOCBF = 0x0;
    IOCCP = 0xFF;
    IOCCN = 0x0;
    IOCCF = 0x0;
    IOCEP = 0x0;
    IOCEN = 0x0;
    IOCEF = 0x0;

    DC_P1_SetInterruptHandler(DC_P1_DefaultInterruptHandler);
    DC_P2_SetInterruptHandler(DC_P2_DefaultInterruptHandler);
    DC_N1_SetInterruptHandler(DC_N1_DefaultInterruptHandler);
    DC_N2_SetInterruptHandler(DC_N2_DefaultInterruptHandler);
    SvA_P1_SetInterruptHandler(SvA_P1_DefaultInterruptHandler);
    SvA_P2_SetInterruptHandler(SvA_P2_DefaultInterruptHandler);
    SvA_N1_SetInterruptHandler(SvA_N1_DefaultInterruptHandler);
    SvA_N2_SetInterruptHandler(SvA_N2_DefaultInterruptHandler);
    SvB_N2_SetInterruptHandler(SvB_N2_DefaultInterruptHandler);
    SvB_N1_SetInterruptHandler(SvB_N1_DefaultInterruptHandler);
    SvB_P2_SetInterruptHandler(SvB_P2_DefaultInterruptHandler);
    SvB_P1_SetInterruptHandler(SvB_P1_DefaultInterruptHandler);

    // Enable PIE0bits.IOCIE interrupt
    PIE0bits.IOCIE = 1;
}

void PIN_MANAGER_IOC(void)
{
    // interrupt on change for pin DC_P1}
    if(IOCAFbits.IOCAF1 == 1)
    {
        DC_P1_ISR();  
    }
    // interrupt on change for pin DC_P2}
    if(IOCAFbits.IOCAF2 == 1)
    {
        DC_P2_ISR();  
    }
    // interrupt on change for pin DC_N1}
    if(IOCAFbits.IOCAF3 == 1)
    {
        DC_N1_ISR();  
    }
    // interrupt on change for pin DC_N2}
    if(IOCAFbits.IOCAF4 == 1)
    {
        DC_N2_ISR();  
    }
    // interrupt on change for pin SvA_P1}
    if(IOCCFbits.IOCCF0 == 1)
    {
        SvA_P1_ISR();  
    }
    // interrupt on change for pin SvA_P2}
    if(IOCCFbits.IOCCF1 == 1)
    {
        SvA_P2_ISR();  
    }
    // interrupt on change for pin SvA_N1}
    if(IOCCFbits.IOCCF2 == 1)
    {
        SvA_N1_ISR();  
    }
    // interrupt on change for pin SvA_N2}
    if(IOCCFbits.IOCCF3 == 1)
    {
        SvA_N2_ISR();  
}
    // interrupt on change for pin SvB_N2}
    if(IOCCFbits.IOCCF4 == 1)
    {
        SvB_N2_ISR();  
    }
    // interrupt on change for pin SvB_N1}
    if(IOCCFbits.IOCCF5 == 1)
    {
        SvB_N1_ISR();  
    }
    // interrupt on change for pin SvB_P2}
    if(IOCCFbits.IOCCF6 == 1)
    {
        SvB_P2_ISR();  
}
    // interrupt on change for pin SvB_P1}
    if(IOCCFbits.IOCCF7 == 1)
    {
        SvB_P1_ISR();  
}
    }

/**
   DC_P1 Interrupt Service Routine
*/
void DC_P1_ISR(void) {

    // Add custom IOCAF1 code

    // Call the interrupt handler for the callback registered at runtime
    if(DC_P1_InterruptHandler)
    {
        DC_P1_InterruptHandler();
    }
    IOCAFbits.IOCAF1 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF1 at application runtime
*/
void DC_P1_SetInterruptHandler(void (* InterruptHandler)(void)){
    DC_P1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF1
*/
void DC_P1_DefaultInterruptHandler(void){
    // add your DC_P1 interrupt custom code
    // or set custom function using DC_P1_SetInterruptHandler()
}

/**
   DC_P2 Interrupt Service Routine
*/
void DC_P2_ISR(void) {

    // Add custom IOCAF2 code

    // Call the interrupt handler for the callback registered at runtime
    if(DC_P2_InterruptHandler)
    {
        DC_P2_InterruptHandler();
    }
    IOCAFbits.IOCAF2 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF2 at application runtime
*/
void DC_P2_SetInterruptHandler(void (* InterruptHandler)(void)){
    DC_P2_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF2
*/
void DC_P2_DefaultInterruptHandler(void){
    // add your DC_P2 interrupt custom code
    // or set custom function using DC_P2_SetInterruptHandler()
}

/**
   DC_N1 Interrupt Service Routine
*/
void DC_N1_ISR(void) {

    // Add custom IOCAF3 code

    // Call the interrupt handler for the callback registered at runtime
    if(DC_N1_InterruptHandler)
    {
        DC_N1_InterruptHandler();
    }
    IOCAFbits.IOCAF3 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF3 at application runtime
*/
void DC_N1_SetInterruptHandler(void (* InterruptHandler)(void)){
    DC_N1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF3
*/
void DC_N1_DefaultInterruptHandler(void){
    // add your DC_N1 interrupt custom code
    // or set custom function using DC_N1_SetInterruptHandler()
}

/**
   DC_N2 Interrupt Service Routine
*/
void DC_N2_ISR(void) {

    // Add custom IOCAF4 code

    // Call the interrupt handler for the callback registered at runtime
    if(DC_N2_InterruptHandler)
    {
        DC_N2_InterruptHandler();
    }
    IOCAFbits.IOCAF4 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF4 at application runtime
*/
void DC_N2_SetInterruptHandler(void (* InterruptHandler)(void)){
    DC_N2_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF4
*/
void DC_N2_DefaultInterruptHandler(void){
    // add your DC_N2 interrupt custom code
    // or set custom function using DC_N2_SetInterruptHandler()
}

/**
   SvA_P1 Interrupt Service Routine
*/
void SvA_P1_ISR(void) {

    // Add custom IOCCF0 code

    // Call the interrupt handler for the callback registered at runtime
    if(SvA_P1_InterruptHandler)
    {
        SvA_P1_InterruptHandler();
    }
    IOCCFbits.IOCCF0 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF0 at application runtime
*/
void SvA_P1_SetInterruptHandler(void (* InterruptHandler)(void)){
    SvA_P1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF0
*/
void SvA_P1_DefaultInterruptHandler(void){
    // add your SvA_P1 interrupt custom code
    // or set custom function using SvA_P1_SetInterruptHandler()
}

/**
   SvA_P2 Interrupt Service Routine
*/
void SvA_P2_ISR(void) {

    // Add custom IOCCF1 code

    // Call the interrupt handler for the callback registered at runtime
    if(SvA_P2_InterruptHandler)
    {
        SvA_P2_InterruptHandler();
    }
    IOCCFbits.IOCCF1 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF1 at application runtime
*/
void SvA_P2_SetInterruptHandler(void (* InterruptHandler)(void)){
    SvA_P2_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF1
*/
void SvA_P2_DefaultInterruptHandler(void){
    // add your SvA_P2 interrupt custom code
    // or set custom function using SvA_P2_SetInterruptHandler()
}
   
/**
   SvA_N1 Interrupt Service Routine
*/
void SvA_N1_ISR(void) {

    // Add custom IOCCF2 code

    // Call the interrupt handler for the callback registered at runtime
    if(SvA_N1_InterruptHandler)
    {
        SvA_N1_InterruptHandler();
    }
    IOCCFbits.IOCCF2 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF2 at application runtime
*/
void SvA_N1_SetInterruptHandler(void (* InterruptHandler)(void)){
    SvA_N1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF2
*/
void SvA_N1_DefaultInterruptHandler(void){
    // add your SvA_N1 interrupt custom code
    // or set custom function using SvA_N1_SetInterruptHandler()
}
   
/**
   SvA_N2 Interrupt Service Routine
*/
void SvA_N2_ISR(void) {

    // Add custom IOCCF3 code

    // Call the interrupt handler for the callback registered at runtime
    if(SvA_N2_InterruptHandler)
    {
        SvA_N2_InterruptHandler();
    }
    IOCCFbits.IOCCF3 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF3 at application runtime
*/
void SvA_N2_SetInterruptHandler(void (* InterruptHandler)(void)){
    SvA_N2_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF3
*/
void SvA_N2_DefaultInterruptHandler(void){
    // add your SvA_N2 interrupt custom code
    // or set custom function using SvA_N2_SetInterruptHandler()
}
   
/**
   SvB_N2 Interrupt Service Routine
*/
void SvB_N2_ISR(void) {

    // Add custom IOCCF4 code

    // Call the interrupt handler for the callback registered at runtime
    if(SvB_N2_InterruptHandler)
    {
        SvB_N2_InterruptHandler();
    }
    IOCCFbits.IOCCF4 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF4 at application runtime
*/
void SvB_N2_SetInterruptHandler(void (* InterruptHandler)(void)){
    SvB_N2_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF4
*/
void SvB_N2_DefaultInterruptHandler(void){
    // add your SvB_N2 interrupt custom code
    // or set custom function using SvB_N2_SetInterruptHandler()
}
   
/**
   SvB_N1 Interrupt Service Routine
*/
void SvB_N1_ISR(void) {

    // Add custom IOCCF5 code

    // Call the interrupt handler for the callback registered at runtime
    if(SvB_N1_InterruptHandler)
    {
        SvB_N1_InterruptHandler();
    }
    IOCCFbits.IOCCF5 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF5 at application runtime
*/
void SvB_N1_SetInterruptHandler(void (* InterruptHandler)(void)){
    SvB_N1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF5
*/
void SvB_N1_DefaultInterruptHandler(void){
    // add your SvB_N1 interrupt custom code
    // or set custom function using SvB_N1_SetInterruptHandler()
}
   
/**
   SvB_P2 Interrupt Service Routine
*/
void SvB_P2_ISR(void) {

    // Add custom IOCCF6 code

    // Call the interrupt handler for the callback registered at runtime
    if(SvB_P2_InterruptHandler)
    {
        SvB_P2_InterruptHandler();
    }
    IOCCFbits.IOCCF6 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF6 at application runtime
*/
void SvB_P2_SetInterruptHandler(void (* InterruptHandler)(void)){
    SvB_P2_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF6
*/
void SvB_P2_DefaultInterruptHandler(void){
    // add your SvB_P2 interrupt custom code
    // or set custom function using SvB_P2_SetInterruptHandler()
}
   
/**
   SvB_P1 Interrupt Service Routine
*/
void SvB_P1_ISR(void) {

    // Add custom IOCCF7 code

    // Call the interrupt handler for the callback registered at runtime
    if(SvB_P1_InterruptHandler)
    {
        SvB_P1_InterruptHandler();
    }
    IOCCFbits.IOCCF7 = 0;
}

/**
  Allows selecting an interrupt handler for IOCCF7 at application runtime
*/
void SvB_P1_SetInterruptHandler(void (* InterruptHandler)(void)){
    SvB_P1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCCF7
*/
void SvB_P1_DefaultInterruptHandler(void){
    // add your SvB_P1 interrupt custom code
    // or set custom function using SvB_P1_SetInterruptHandler()
}
/**
 End of File
*/