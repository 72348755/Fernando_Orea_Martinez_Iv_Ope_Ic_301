/**
 * @file Ruta mas corta
 * @version 1.0
 * @date 01/02/2021
 * @author FernandoO
 * @title Ruta mas corta
 *@code 
	
	int a,b,filcol,nodos,adya,r,r2=0,aux=0;
    int matriz [TAM][TAM]; 
    int grafo [TAM][2];
    
//Insertar datos 	
	printf("\t\t\t|     Ruta mas corta   |\n");	
	printf("Ingrese el numero de nodos: ");
	scanf("%d", &nodos);
	filcol=nodos;
	insertar0(matriz,filcol);
	printf("Cuantas adyacencias hay: ");
	scanf("%d", &adya);
	introducir_adya(grafo,matriz,adya); 
	printf("|Rutas que deseas llegar|");
	while(r2==0){
	printf("\n|Que ruta deseas visitar|\n");
	printf("Punto |a|: ");
	scanf("%d", &a);
	printf("Punto |b|: ");
	scanf("%d", &b);
	r=buscar(grafo,matriz,a,b,filcol,aux);
	
	if (r==1){
		
		printf("\n     Nota: Si existe una ruta ");
		
	}
	else {
		printf("\n Nota: No existe una ruta ");
	}
	
	} 
	
return 0;

}
*/

#include <stdio.h>
#define TAM 50
/**
*brief Metodo insertar Nodos que se vallan solicitando
*/
void insertar0(int m[][TAM],int fc);
/**
*brief Metodo de coordenadas para obtener adyacensia

*/
void introducir_adya(int g[][2],int m[][TAM],int f);
/**
*brief Metodo para localizar datos en la matriz

*/
int buscar(int g[][2],int m[][TAM],int a,int b,int fc,int ax);



