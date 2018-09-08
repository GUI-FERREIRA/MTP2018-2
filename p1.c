/* P1.c */
/* Guilherme Ferreira de Jesus */
/* 11811ETE008 */
#include <stdio.h>
int main (){
	char sequencia[256];
	int estado = 0, i, x =0;
	scanf ("%s", sequencia);
	for(i=0; sequencia[i] != '\0'; i++)
	{
		x = sequencia[i] - 48;
		if(estado == 0)
			estado = x;
		else if(estado ==1)
		{
			if(x==0)
				estado = 2;
			else
				estado = 0; 
		}
		else if(estado == 2)
		{
			if(x==0)
			estado = 1;
			else
			estado = 2;
		}
	}
	 printf("\n%s\n%s",sequencia, estado==0?"eh multiplo de 3!":"nao eh multiplo de 3!");
	return 0;
}
