/* p7.c */
/* Guilherme Ferreira de Jesus */
/* 11811ETE008 */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define pi 3.141592653589793

typedef struct{
	double *x,*y;
} Ponto;

int main(){
	int N, i; 
	FILE *arq;
    char vet[50] = {0};
	float a;
   	Ponto coordenadas;
   	scanf("%i", &i);
	getchar();
	switch(i){
		case 1: 
		scanf("%d", &N);
        fflush(stdin);
        coordenadas.x = calloc(N, sizeof(double));
        coordenadas.y = calloc(N, sizeof(double));
   		for(i=0; i<N; i++){
   			a = ((i*2.0*pi)/(N-1));
   			coordenadas.x[i]= cos(a);
   			coordenadas.y[i]= sin(a);
  	 	}
  	 	arq = fopen("pontos.dat", "w");
        for (i = 0; i < N; i++) {
            fprintf(arq, "(%.3lf,%.3lf)\n", coordenadas.x[i], coordenadas.y[i]);
        }
        fclose(arq);
		free(coordenadas.x);
        free(coordenadas.y);
		break;
		
		case 2:
		arq = fopen("pontos.dat", "r");
        while (!feof(arq)) {
            fgets(vet, 49, arq);
            printf("%s", vet);
        }
        fclose(arq);
        break;
	}
   	
   	return 0;
}
