
#ifndef HEADER_H_
#define HEADER_H_


#define F_CPU 16000000UL /* Definerar klockfrekvensen till 16 MHz. 
                          UL inneb�r Unsigned Long kan lagra 32- bitars osignerad heltalsdata*/

#include <avr/io.h>     /* inneh�ller information om I/O-register, s�som DDRB, PORTB  */
#include <util/delay.h> /* inneh�ller funktionalitetet f�r generering av f�rdr�jning */


#define LED1 6      /* PORTD6 till pin 6*/
#define LED2 7      /*PORTdD7 till pin 7*/
#define LED3 0      /* PORTB0 till pin 8*/


#define BUTTON1 5
#define BUTTON2 4

#define LED1_ON PORTD |= (1 << LED1)   /*   t�nder lysdiod 1     */
#define LED2_ON PORTD |= (1 << LED2)   /*   t�nder lysdiod 2     */
#define LED3_ON PORTB |= (1 << LED3)   /*   t�nder lysdiod 3     */

#define LED1_OFF PORTD &= ~(1 << LED1) /*Sl�cker lysdiod 1 */
#define LED2_OFF PORTD &= ~(1 << LED2) /*Sl�cker lysdiod 2 */
#define LED3_OFF PORTB &= ~(1 << LED3) /*Sl�cker lysdiod 3 */


#define BUTTON1_IS_PRESSED (PINB & (1<< BUTTON1))  /* Indikerar nedtryckning av tryckknypp 1. */
#define BUTTON2_IS_PRESSED (PINB & (1<< BUTTON2))  /* Indikerar nedtryckning av tryckknypp 2. */
#define ALL_BUTTONS_PRESSED (BUTTON1_IS_PRESSED && BUTTON2_IS_PRESSED)


void leds_on  (void);
void leds_off (void);
void setup    (void); /* imiterar mikrodatorons I/O-portar */
void delay_ms (const uint16_t delay_time_ms);  /* inneh�ller funktionalitetet f�r generering av f�rdr�jning */
void leds_blink_forward (const uint16_t blink_speed_ms);  
void leds_blink_backward (const uint16_t blink_speed_ms);

#endif 