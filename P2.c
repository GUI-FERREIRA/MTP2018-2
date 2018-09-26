/* P2.c */
/* Guilherme Ferreira de Jesus */
/* 11811ETE008 */
#include<stdio.h>

int tamanho(char str[]){
  int i;
  for(i=0; str[i]; i++);
  return i;
}

void removeZeros(char bits[]){
  int i=0, flag=0, j=0;
  for(;i<=20; i++){
    if(bits[i]!='0') 
    flag=1;
    if(flag==1){
      bits[j]=bits[i];
      j++;
    }
  }
  bits[j]=0;
}

int Para_Decimal(int base, char str[]){
   int i, dec=0, potencia=1, b;
   for(i=tamanho(str)-1; i>=0; i--){
      if(str[i]<='9') 
        b=str[i]-'0'; 
      else 
        b=str[i]-'A'+10;
     
     dec = dec + b*potencia;
     potencia = potencia*base;
   }
   return dec;
}

void Decimal(int base, int dec, char str[]){
  int i;
  for(i=20; i>=0; i--){
    str[i]=dec%base+'0';
    dec/=base;
    if(str[i]>'9') 
    str[i]='A'-1+(str[i]-'9');
  }
  removeZeros(str);
}

int main(){
   int opcao, dec;
   char bits[256];
   scanf("%d",&opcao);
   switch(opcao){
     case 1://binario para decimal
     scanf("%s", bits);
     printf("%d",Para_Decimal(2, bits));
     break;   
     
     case 2://binario para hexadecimal
     scanf("%s", bits);
     Decimal(16,Para_Decimal(2,bits), bits);
     printf("%s", bits);
     break;
     
     case 3://Hexadecimal para decimal
     scanf("%s", bits);
     printf("%d", Para_Decimal(16, bits));
     break;
     
     case 4://Hexadecimal para binário
     scanf("%s", bits);
     Decimal(2,Para_Decimal(16,bits), bits);
     printf("\"%s\"\n", bits);
     break;
     
     case 5://decimal para binario
     scanf("%i", &dec);
     Decimal(2, dec, bits);
     printf("%s", bits);
     break;
     
     case 6://decimal para hexadecimal
     scanf("%i", &dec);
     Decimal(16, dec, bits);
     printf("%s", bits);
     break;
     
     case 7://octal para decimal
     scanf("%s", bits);
     printf("%d",Para_Decimal(8, bits));
     break;
     
     case 8://decimal para octal
     scanf("%i", &dec);
     (8, dec, bits);
     printf("%s", bits);
     break;

   }
   return 0;
}
