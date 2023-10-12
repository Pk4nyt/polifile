#include<stdio.h>
#define DIM 10
#define MAX 1024
#define BASE 2

int main (){
	int bin[DIM], i, n;
		scanf("%d", &n);

	while (n < 0 || n >= MAX){
		printf("Errore\n");
		scanf("%d", &n);
	}

	i = DIM - 1;
	while (n > 0){
		
		bin[i] = n % BASE;
		i--
		n = n / BASE;
	}
	for (; i >=0 ; i--)
		bin[i] = 0

	for (i = 0; i < DIM; i++)
		printf("%d", bin [i]);
	printf("\n");

	return 0;

}