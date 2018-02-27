/* 
 * File:   configuration_bits.h
 * Author: Student
 *
 * Created on January 9, 2018, 11:00 AM
 */

#ifndef CONFIGURATION_BITS_H
#define	CONFIGURATION_BITS_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* CONFIGURATION_BITS_H */

#pragma config WDT = OFF
#pragma config OSC = INTIO7      // puts osc/4 on pin 14 to check freq
#pragma config MCLRE = OFF
#pragma config LVP = OFF
#pragma config PBADEN = OFF      // PORTB<4:0> are digital IO 
