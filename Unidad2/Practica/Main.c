#include <stdio.h>
#include <stdlib.h>
#include "Ruta mas corta.h"

int main(){
	
	
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

