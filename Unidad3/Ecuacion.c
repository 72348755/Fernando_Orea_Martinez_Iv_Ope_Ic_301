/*-------------------------------------------------------------------------*/
/**
  @file     Grafica.c
  @author   N. Devillard
  @date Sep 1998
  @brief    C interface to gnuplot.

  gnuplot is a freely available, command-driven graphical display tool for
  Unix. It compiles and works quite well on a number of Unix flavours as
  well as other operating systems. The following module enables sending
  display requests to gnuplot through simple C calls.

*/
/*--------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
    Includes
 ---------------------------------------------------------------------------*/

#include "Ecuacion.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <assert.h>

#ifdef WIN32
#include <io.h>
#endif // #ifdef WIN32


/**
*@brief    tablaC() inicia una operacion para guardar las coordenadas en un cierto rango.
*\details   Las coordenadas se guardan en la cadena de valores de tipo entero "x" y "y", para despues ser impresas en formato de tabla.
* 
*\details   tablaC = Tabla de Coordenadas
*@param     m        Guarda el dato "m" de la funcion.
*@param     b        Guarda el dato "r" de la funcion.
*@param     r1       Para alojar el rango inferior o izquierdo. 
*@param     r2       Para alojar el rango superior o derecho.
*@return   void
*/
void tablaC(int r1, int r2, int m, int b){
	int i,j=0,r;
	
	//definir un rango para las cadenas de tipo entero
	if(r1<0){
		r=((r1)*-1)+r2;
	}
	else{
		r=r2-r1;
	}
	//asignacion del rango para la cantidad de datos que van a contener
	int x[r],y[r]; 
	//se asigan los valores de las coordenadas en "x" y "y"
	for (i=r1;i<r2;i++){
        x[j]=i;
        y[j]=(m*i)+b;
        j++;
    }
    printf("\n\t\tCordenadas\a");
    printf("\n\t---------------------------------");
    printf("\n\t|\tx\t|\ty=mx+b\t|");
    printf("\n\t---------------------------------");
    for (i=0;i<r;i++){
    	printf("\n\t|\t%d\t|\t%d\t|",x[i],y[i]);
   }
   printf("\n\t---------------------------------");
}


