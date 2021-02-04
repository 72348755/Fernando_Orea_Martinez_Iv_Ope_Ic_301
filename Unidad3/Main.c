/**
*@file      main.c
*@author    Fernando Orea Martinez.
*@date      03-02-2021 codigo.
*
*@brief     Seccion principal del código.
*\
*
*\
*
*@param     m        Guarda el dato "m" de la funcion.
*@param     b        Guarda el dato "r" de la funcion.
*@param     r1       Para alojar el rango inferior o izquierdo. 
*@param     r2       Para alojar el rango superior o derecho.
*@param     tiempo   Permite al usuario elegir cuanto tiempo puede ver la grafica.
*
*@todo      Mejorar el aspecto de la tabla generada por el programa
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "Ecuacion.h"

int main() {
	// Variables 
	int m,b,r1,r2,tiempo;

	printf("\t\t\t| Grafica una funcion lineal:|\n");
	printf("\t\t\t|          |  y=mx+b |\n");	
    
    
    	// Ingresar los datos de la funciones 
   	printf("\n--------------------------------------------\n");
    printf("  -->Ingresa el valor|m|<--\n");
    printf("R= ");
	scanf("%d", &m);
	printf("  -->Ingresa el valor|b|<--\n");
    printf("R= ");
	scanf("%d", &b);
	printf("  -->Ingrese rango inicial en eje x<--\n");
	printf("R= ");
	scanf("%d", &r1);
	printf("  -->Ingrese rango final en eje x<--\n");
	printf("R= ");
	scanf("%d", &r2);
   	printf("--->Ingrese el numero |10| para que te genere visualizacion del grafico<---\n");
	printf("R= ");
	scanf("%d", &tiempo);
	printf("---------------------------------------------------------------------------\n");
	tablaC(r1,r2,m,b);
	return 0;
}

