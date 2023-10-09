/* 
 * Programa exemple del funcionament d'una simulacio orientada en events
 * basada en el codi donat en el llibre Jorba, Capitol 2
 * 
 * Declaracions generals del program
 * 
 * File:   sev.h
 * Author: Dolors Sala
 */
#ifndef _SEV
#define _SEV

#include <stdio.h>
#include <stdlib.h>

// Parametres del sistema de cues
#define OBRIR      'O'
#define ARRIBADA   'A'
#define SORTIDA    'S'
#define TANCAR     'T'

#define ARRIVAL    40   // Temps mig entre arribades 
#define SERVICE    90     // Temps mig de servei

#define RANSEED    23423  // 541324
// Valor de la llavor inicial del generador aleatori 56721
#define OBRIRTIME  0       // Temps d'inici d'obertura
#define TANCARTIME 100     // Temps de finalització

float expo(float m);
   
#endif



