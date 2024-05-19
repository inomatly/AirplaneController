/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
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

void (*SW1_InterruptHandler)(void);
void (*SW2_InterruptHandler)(void);
void (*SW3_InterruptHandler)(void);
void (*SW4_InterruptHandler)(void);
void (*SW5_InterruptHandler)(void);
void (*SW6_InterruptHandler)(void);
void (*SW7_InterruptHandler)(void);

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
    TRISA = 0xFF;
    TRISB = 0x0;
    TRISC = 0xFC;

    /**
    ANSELx registers
    */
    ANSELA = 0x40;
    ANSELB = 0x0;
    ANSELC = 0xFC;

    /**
    WPUx registers
    */
    WPUA = 0xBF;
    WPUB = 0x0;
    WPUC = 0x0;
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
    IOCAP = 0xBF;
    IOCAN = 0x0;
    IOCAF = 0x0;
    IOCBP = 0x0;
    IOCBN = 0x0;
    IOCBF = 0x0;
    IOCCP = 0x0;
    IOCCN = 0x0;
    IOCCF = 0x0;
    IOCEP = 0x0;
    IOCEN = 0x0;
    IOCEF = 0x0;

    SW1_SetInterruptHandler(SW1_DefaultInterruptHandler);
    SW2_SetInterruptHandler(SW2_DefaultInterruptHandler);
    SW3_SetInterruptHandler(SW3_DefaultInterruptHandler);
    SW4_SetInterruptHandler(SW4_DefaultInterruptHandler);
    SW5_SetInterruptHandler(SW5_DefaultInterruptHandler);
    SW6_SetInterruptHandler(SW6_DefaultInterruptHandler);
    SW7_SetInterruptHandler(SW7_DefaultInterruptHandler);

    // Enable PIE0bits.IOCIE interrupt 
    PIE0bits.IOCIE = 1; 
}
  
void PIN_MANAGER_IOC(void)
{
    // interrupt on change for pin SW1}
    if(IOCAFbits.IOCAF0 == 1)
    {
        SW1_ISR();  
    }
    // interrupt on change for pin SW2}
    if(IOCAFbits.IOCAF1 == 1)
    {
        SW2_ISR();  
    }
    // interrupt on change for pin SW3}
    if(IOCAFbits.IOCAF2 == 1)
    {
        SW3_ISR();  
    }
    // interrupt on change for pin SW4}
    if(IOCAFbits.IOCAF3 == 1)
    {
        SW4_ISR();  
    }
    // interrupt on change for pin SW5}
    if(IOCAFbits.IOCAF4 == 1)
    {
        SW5_ISR();  
    }
    // interrupt on change for pin SW6}
    if(IOCAFbits.IOCAF5 == 1)
    {
        SW6_ISR();  
}
    // interrupt on change for pin SW7}
    if(IOCAFbits.IOCAF7 == 1)
    {
        SW7_ISR();  
    }
}
   
/**
   SW1 Interrupt Service Routine
*/
void SW1_ISR(void) {

    // Add custom IOCAF0 code
    DriveLed(IoTOGGLE);
    // Call the interrupt handler for the callback registered at runtime
    if(SW1_InterruptHandler)
    {
        SW1_InterruptHandler();
    }
    IOCAFbits.IOCAF0 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF0 at application runtime
*/
void SW1_SetInterruptHandler(void (* InterruptHandler)(void)){
    SW1_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF0
*/
void SW1_DefaultInterruptHandler(void){
    // add your SW1 interrupt custom code
    // or set custom function using SW1_SetInterruptHandler()
}
   
/**
   SW2 Interrupt Service Routine
*/
void SW2_ISR(void) {

    // Add custom IOCAF1 code

    // Call the interrupt handler for the callback registered at runtime
    if(SW2_InterruptHandler)
    {
        SW2_InterruptHandler();
    }
    IOCAFbits.IOCAF1 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF1 at application runtime
*/
void SW2_SetInterruptHandler(void (* InterruptHandler)(void)){
    SW2_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF1
*/
void SW2_DefaultInterruptHandler(void){
    // add your SW2 interrupt custom code
    // or set custom function using SW2_SetInterruptHandler()
}
   
/**
   SW3 Interrupt Service Routine
*/
void SW3_ISR(void) {

    // Add custom IOCAF2 code

    // Call the interrupt handler for the callback registered at runtime
    if(SW3_InterruptHandler)
    {
        SW3_InterruptHandler();
    }
    IOCAFbits.IOCAF2 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF2 at application runtime
*/
void SW3_SetInterruptHandler(void (* InterruptHandler)(void)){
    SW3_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF2
*/
void SW3_DefaultInterruptHandler(void){
    // add your SW3 interrupt custom code
    // or set custom function using SW3_SetInterruptHandler()
}
   
/**
   SW4 Interrupt Service Routine
*/
void SW4_ISR(void) {

    // Add custom IOCAF3 code

    // Call the interrupt handler for the callback registered at runtime
    if(SW4_InterruptHandler)
    {
        SW4_InterruptHandler();
    }
    IOCAFbits.IOCAF3 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF3 at application runtime
*/
void SW4_SetInterruptHandler(void (* InterruptHandler)(void)){
    SW4_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF3
*/
void SW4_DefaultInterruptHandler(void){
    // add your SW4 interrupt custom code
    // or set custom function using SW4_SetInterruptHandler()
}
   
/**
   SW5 Interrupt Service Routine
*/
void SW5_ISR(void) {

    // Add custom IOCAF4 code

    // Call the interrupt handler for the callback registered at runtime
    if(SW5_InterruptHandler)
    {
        SW5_InterruptHandler();
    }
    IOCAFbits.IOCAF4 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF4 at application runtime
*/
void SW5_SetInterruptHandler(void (* InterruptHandler)(void)){
    SW5_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF4
*/
void SW5_DefaultInterruptHandler(void){
    // add your SW5 interrupt custom code
    // or set custom function using SW5_SetInterruptHandler()
}
   
/**
   SW6 Interrupt Service Routine
*/
void SW6_ISR(void) {

    // Add custom IOCAF5 code

    // Call the interrupt handler for the callback registered at runtime
    if(SW6_InterruptHandler)
    {
        SW6_InterruptHandler();
    }
    IOCAFbits.IOCAF5 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF5 at application runtime
*/
void SW6_SetInterruptHandler(void (* InterruptHandler)(void)){
    SW6_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF5
*/
void SW6_DefaultInterruptHandler(void){
    // add your SW6 interrupt custom code
    // or set custom function using SW6_SetInterruptHandler()
}
   
/**
   SW7 Interrupt Service Routine
*/
void SW7_ISR(void) {

    // Add custom IOCAF7 code

    // Call the interrupt handler for the callback registered at runtime
    if(SW7_InterruptHandler)
    {
        SW7_InterruptHandler();
    }
    IOCAFbits.IOCAF7 = 0;
}

/**
  Allows selecting an interrupt handler for IOCAF7 at application runtime
*/
void SW7_SetInterruptHandler(void (* InterruptHandler)(void)){
    SW7_InterruptHandler = InterruptHandler;
}

/**
  Default interrupt handler for IOCAF7
*/
void SW7_DefaultInterruptHandler(void){
    // add your SW7 interrupt custom code
    // or set custom function using SW7_SetInterruptHandler()
}
/**
 End of File
*/