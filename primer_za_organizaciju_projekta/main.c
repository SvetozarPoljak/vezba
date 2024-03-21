/**
* @file main.c
* @brief Aplikacija koja implementira ogranicen broj
* @author Svetozar Poljak
* @date 21-03-2024
* @version 1.0
*/

#include <avr/io.h>
#include <stdint.h>
#include "pin.h"
#include "timer0.h"
#include "utils.h"
#include "pulsing.h"

/// Makro za selektovanje pina na koji je povezana dioda
#define DIODE_PIN 5
/// Makro za podesavanje periode u brzom rezimu treptanja
#define FAST 200
/// Makro za podesavanje periode u sporom rezimu treptanja
#define SLOW 1000
/// Makro za podesavanje broja brzih treptaja
#define FAST_REPS 15
/// Makro za podesavanje broja sporih treptaja
#define SLOW_REPS 3

/**
* main - funkcija koja implementira glavni deo aplikacije
*/
int16_t main ()
{
	uint32_t period = 1000;  // Period jednog treptaja
	uint8_t repetitions = 5; // Broj treptaja

	// Inicijalizacija
	pinInit (PORT_B , DIODE_PIN , OUTPUT );
	timer0Init ();

	// Glavna petlja
	while (1)
	{
		// Brzo treptanje
		pinPulsing (PORT_B , DIODE_PIN , FAST , FAST_REPS );
		// Sporo treptanje
		pinPulsing (PORT_B , DIODE_PIN , SLOW , SLOW_REPS );
		// Kraj
		while (1)
		;
	}

	return 0;
}
