/**
 * @file pulsing.h
 * @brief Biblioteka za kreiraje naizmenicne promene stanja na pinu
 * @author Svetorzar Poljak
 * @date 21-03-2024
 * @version 1.0
 */

#ifndef PULSING_H_
#define PULSING_H_

#include "utils.h"
#include "pin.h"
#include "timer0.h"

/**
* pinPulsing - Funkcija koja implementira num_of_repetitions perioda podizanja i spustanja vrednosti na pinu odgovarajucom brzinom
* @param port - Ulaz tipa uint8_t
* @param pin - Ulaz tipa uint8_t
* @param period - Ulaz tipa uint8_t
* @param num_of_repetitions - Ulazni tipa uint8_t
* @return - Nema povratnu vrednost
*/
void pinPulsing (uint8_t port, uint8_t pin, uint32_t period, uint8_t num_of_repetitions);

/**
* pinPulse - Funkcija koja implementiran podizanje i spustanje vrednosti na pinu odgovarajucom brzinom
* @param port - Ulaz tipa uint8_t
* @param pin - Ulaz tipa uint8_t
* @param period - Ulaz tipa uint32_t
* @return - Nema povratnu vrednost
*/
void pinPulse (uint8_t port , uint8_t pin , uint32_t period);

#endif /* PULSING_H_ */
