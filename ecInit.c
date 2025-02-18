/** \file ecInit.c
 *  \brief Função de incialização do vector 
 * 
 *  Ficheiro onde incializamos , o nosso vector , assumindo um maximo de leituras equivalente a 96  
 * 
 * 
 * 
 *  \authors Simão & Celina
 *  \date 18/02/2025
 *  \bug  Até a data 0 bugs
*/




#include <stdio.h>
#include "enerconsumption.h"


void ecInit(float vect[]) {
    int i;
    for (i = 0; i < MAX_READINGS; i++) {
        vect[i] = 0.0;
    }
}
