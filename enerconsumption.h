/** \file enerconsumption.h
 *  \brief Ficheiro .h 
 * 
 * 
 * Ficheiro .h po projeto de consumo energetico a nivél eletrico, 
 * onde inicializamos as nossas funções 
 * 
 * 
 * 
 *  \authors Simão & Celina
 *  \date 18/02/2025
 *  \bug  Até a data 0 bugs
*/
#ifndef ENERCONSUMPTION_H
#define ENERCONSUMPTION_H

/* Number of 15-minute intervals in a day (24 * 4 = 96) */
#define MAX_READINGS 96

/* Cost per kWh in EUR */
#define COST_KWH 0.16

/* Function Prototypes */
void ecInit(float vect[]);
void ecAdd(float vect[], float reading, int *nextReading);
void dtSum(float vect[], float *peak, float *dailyValue, float *dailyCost);

#endif
