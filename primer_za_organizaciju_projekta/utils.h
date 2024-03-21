/**
 * @file utils.h
 * @brief Pomocna biblioteka
 * @author Svetozar Poljak
 * @date 21-03-2024
 * @version 1.0
 */

#ifndef UTILS_H_
#define UTILS_H_

#include <stdint.h>

/**
* calculateHalfPeriod - Funkcija koja izracunava polovinu prosledjene periode
* @param period - Ulaz tipa uint32_t - perioda
* @return - polovina prosledjene periode
*/
uint32_t calculateHalfPeriod (uint32_t period);

#endif /* UTILS_H_ */
