/* P3.c */
/* Guilherme Ferreira de Jesus */
/* 11811ETE008 */
#include <stdio.h>
int ackerman(int m, int n){
	if(m==0) 
		return n+1;
   	
	else if(m>0 && n==0) 
		ackerman(m-1,1);
   	else if(m>0 && n>0) 
	   	ackerman(m-1, ackerman(m, n-1));
}

int main() {
	int m, n, a;
	scanf("%d%d", &m, &n);
	a = ackerman(m,n);	
	printf("%d", a);
	return 0;
}
