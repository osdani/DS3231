/*
 * File:   main.c
 * Author: Daniel Rodriguez
 *
 * Created on July 12, 2021, 10:23 PM
 */

// DSPIC30F4011 Configuration Bit Settings
#include "Device_config.h"
#include <p30F4011.h>
// 'C' source line config statements

//// FOSC
//#pragma config FPR = FRC_PLL16          // Primary Oscillator Mode (FRC w/ PLL 16x)
//#pragma config FOS = FRC                // Oscillator Source (Internal Fast RC)
//#pragma config FCKSMEN = CSW_FSCM_ON    // Clock Switching and Monitor (Sw Enabled, Mon Enabled)
//
//// FWDT
//#pragma config FWPSB = WDTPSB_16        // WDT Prescaler B (1:16)
//#pragma config FWPSA = WDTPSA_512       // WDT Prescaler A (1:512)
//#pragma config WDT = WDT_OFF            // Watchdog Timer (Disabled)
//
//// FBORPOR
//#pragma config FPWRT = PWRT_16          // POR Timer Value (16ms)
//#pragma config BODENV = BORV20          // Brown Out Voltage (Reserved)
//#pragma config BOREN = PBOR_OFF         // PBOR Enable (Disabled)
//#pragma config LPOL = PWMxL_ACT_LO      // Low-side PWM Output Polarity (Active Low)
//#pragma config HPOL = PWMxH_ACT_HI      // High-side PWM Output Polarity (Active High)
//#pragma config PWMPIN = RST_IOPIN       // PWM Output Pin Reset (Control with PORT/TRIS regs)
//#pragma config MCLRE = MCLR_EN          // Master Clear Enable (Enabled)
//
//// FGS
//#pragma config GWRP = GWRP_OFF          // General Code Segment Write Protect (Disabled)
//#pragma config GCP = CODE_PROT_OFF      // General Segment Code Protection (Disabled)
//
//// FICD
//#pragma config ICS = ICS_PGD            // Comm Channel Select (Use PGC/EMUC and PGD/EMUD)
//
//// #pragma config statements should precede project file includes.
//// Use project enums instead of #define for ON and OFF.
//
//#include <xc.h>



//DEFINIR MACROS (del archivo p30f4011 en los archivos del compilador)
_FOSC( FRC_PLL16 & CSW_FSCM_OFF)               //Frecuencia de Oscilacion
_FWDT( WDT_OFF )                        //Whatchdog timer
_FBORPOR( PWRT_16 & BORV20 & MCLR_EN )  //Reinicio
_FGS( CODE_PROT_OFF )                   //Seguridad
