/* P3.c */
/* Guilherme Ferreira de Jesus */
/* 11811ETE008 */
#include<stdio.h>
int numeros(char str[], int num){
	int i;
	for(i=0;str[i];i++){
    	if(str[i]>='0' && str[i]<='9'){
    		num = num*10+(str[i]-'0');
		}
	}
	return num;
}
int main(){
	int num = 0, i;
	char str[256];
	scanf("%s", str);
	num = numeros(str, num);
	printf("%i", num);
	return 0;
}
