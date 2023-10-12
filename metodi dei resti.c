#include <stdio.h>
#define BASE 2
#define BASE 10

int main(){
  int num, pot10, cifra, ris;

  scanf("%d", &num);

  ris = 0;
  pot10 = 1;

  do{
  	cifra = num % BASE 2 ;
  	num = /= BASE 2;
  	ris = ris + cifra*pot10;
  	pot10 *= BASE 10;

  } while (num > 0 )
	printf("%d\n", ris);	
	return 0;
}