/**
 * @file timer0.h
 * @brief Biblioteka za manipulaciju tajmer/brojackim modulom 0
 * @author Svetozar Poljak
 * @date 21-03-2024
 * @version 1.0
 */

#ifndef TIMER0_H_
#define TIMER0_H_

#include <avr/io.h>
#include <avr/interrupt.h>

/**
* timer0DelayMs - Funkcija koja implementira pauzu u broju milisekundi koji je prosledjen kao parametar
* @param delay_length - Ulaz tipa uint32_t
* @return - Nema povratnu vrednost
*/
void timer0DelayMs (uint32_t delay_length);

/**
* timer0Millis - Funkcija koja , na bezbedan nacin , vraca kao povratnu vrednost broj milisekundi proteklih od pocetka merenja vremena
* @param - Nema ulaza
* @return - Broj milisekundi proteklih od pocetka merenja vremena
*/
uint32_t timer0Millis ();

/**
* timer0Init - Funkcija koja inicijalizuje timer 0 tako da pravi prekide svake milisekunde
* @param - Nema ulaza
* @return - Nema povratnu vrednost
*/
void timer0Init ();

/**
* ISR - prekidna rutina tajmer / brojac modula 0 u modu CTC
*/
ISR(TIMER0_COMPA_vect);

#endif /* TIMER0_H_ */
