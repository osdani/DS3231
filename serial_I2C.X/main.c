/*
 * File:   main.c
 * Author: Oscar Daniel Rodriguez Gallego
 *
 * Created on 14 de diciembre de 2021, 02:52 PM
 */


#include <xc.h>
#include "Device_config.h"
#include <libpic30.h>
#include <stdint.h>
#include "I2C.h"
#include "DS3231.h"
#include "UART.h"
///*
// * lectura del RS3231 Address =1101000+W/R W=0,R=1 pag = 17 datasheet 
// * esta libreria hace uso del la libreria I2C ya que el modulo trabaja con dicho procolo
// */
// varialbles globlaes 
char TimeConfig[] = "033100";
char DateConfig[] = "190122";

int main(void) {
    TRISEbits.TRISE8 = 0;
    Init_I2C();
    init_UART1A();
    Config_Time(TimeConfig);
    Config_Date(DateConfig);
    __delay_ms(1000);
    while (1) {
        Read_Time();
        Read_Date();
        Serial_putUint32(Concatenate_Time());
        Serial_putUint32(Concatenate_Date());
//        Uart_I2C();
        LATEbits.LATE8 = 1;
//        Read_PoweSystem();
        __delay_ms(500);
        LATEbits.LATE8 = 0;
        __delay_ms(500);
    }

}
