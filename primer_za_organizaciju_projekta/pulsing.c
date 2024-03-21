/**
 * @file pulsing.c
 * @brief Datoteka koja definise funkcije za kreiraje naizmenicne promene stanja na pinu
 * @author Svetozar Poljak
 * @date 21-03-2024
 * @version 1.0
 */

#include "pulsing.h"

void pinPulsing (uint8_t port, uint8_t pin, uint32_t period, uint8_t num_of_repetitions)
{
	uint8_t i;
	// Implementacija num_of_repetitions perioda
	for (i = 0; i < num_of_repetitions ; i++)
		pinPulse (port, pin, period);
}

/***********************************************************/

void pinPulse (uint8_t port, uint8_t pin, uint32_t period)
{
	// Poluperioda u kojoj pin ima visoku vrednost
	pinSetValue (port, pin, HIGH);
	timer0DelayMs (calculateHalfPeriod (period));

	// Poluperioda u kojoj pin ima nisku vrednost
	pinSetValue (port, pin, LOW);
	timer0DelayMs (calculateHalfPeriod (period));
}
