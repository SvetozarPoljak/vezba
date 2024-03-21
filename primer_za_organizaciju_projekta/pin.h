/**
 * @file pin.h
 * @brief Biblioteka za upravljanje pinovima
 * @author Svetorzar Poljak
 * @date 21-03-2024
 * @version 1.0
 */

#ifndef PIN_H_
#define PIN_H_

#include <avr/io.h>
#include <stdint.h>

/// Makro za podesavanje visoke vrednosti signala na pinu
#define HIGH 1
/// Makro za podesavanje niske vrednosti signala na pinu
#define LOW 0
/// Makro za podesavanje izlaznog smera pina
#define OUTPUT 1
/// Makro za podesavanje ulaznog smera pina
#define INPUT 0
/// Makro za selektovanje porta B
#define PORT_B 0
/// Makro za selektovanje porta C
#define PORT_C 1
/// Makro za selektovanje porta D
#define PORT_D 2

/**
* pinInit - Funkcija koja implementira inicijalizaciju pina
* @param port - Ulaz tipa uint8_t
* @param pin - Ulaz tipa uint8_t
* @param direction - Ulaz tipa uint8_t
* @return - Nema povratnu vrednost
*/
void pinInit (uint8_t port , uint8_t pin , uint8_t direction);

/**
* pinSetValue - Funkcija koja postavlja vrednost na pinu
* @param port - Ulaz tipa uint8_t
* @param pin - Ulaz tipa uint8_t
* @param value - Ulaz tipa uint8_t
* @return - Nema povratnu vrednost
*/
void pinSetValue (uint8_t port , uint8_t pin , uint8_t value);

#endif /* PIN_H_ */
