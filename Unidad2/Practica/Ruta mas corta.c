#include "Ruta mas corta.h"




void insertar0(int m[][TAM],int fc){
	int i,j;
	for (i=0;i<fc;i++){
		for (j=0;j<fc;j++){
			m[i][j]=0;
		}
    } 
}


void introducir_adya(int g[][2],int m[][TAM],int f){
	int i,x,y;
	for(i=0;i<f;i++){
	printf("");	
	printf("    Ingrese las coordenadas de la adyacencia %d  \n",i+1);
	printf("Ingrese  |x|: ");
	scanf("%d", &x);
	printf("Ingrese  |z|: ");
	scanf("%d", &y);
	m [x-1][y-1]=1;
	g [i][0]=x;
	g [i][1]=y;
}
}



int buscar(int g[][2],int m[][TAM],int a,int b,int fc,int ax){
	int i,j,d;
	if (m[a-1][b-1]!=1){
		for (i=0;i<fc+1;i++){
			if (g[i][0]==a){
				d=g[i][1];
				return buscar(g,m,d,b,fc,ax);
			}
			
		}
	}
	else {
		ax=1;
		return ax;
	}
			}
	
	
