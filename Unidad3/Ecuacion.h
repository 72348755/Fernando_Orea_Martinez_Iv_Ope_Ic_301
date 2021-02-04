/*-------------------------------------------------------------------------*/
/**
  @file     Grafica.h
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
#include <stdio.h>

/** Maximal number of simultaneous temporary files */
#define GP_MAX_TMP_FILES    64


/**
*@brief    tablaC() inicia una operacion para guardar las coordenadas en un cierto rango.
*\details   Las coordenadas se guardan en la cadena de valores de tipo entero "x" y "y",
 para despues ser impresas en formato de tabla.
* 
*\details   tablaC = Tabla de Coordenadas
*@param     m        Guarda el dato "m" de la funcion.
*@param     b        Guarda el dato "r" de la funcion.
*@param     r1       Para alojar el rango inferior o izquierdo. 
*@param     r2       Para alojar el rango superior o derecho.
*@return   void
*/
void tablaC(int r1, int r2, int m, int b);


