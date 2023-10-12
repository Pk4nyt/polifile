#include<stdio.h>

int main (){

	int n,i, conta;
		scanf("%d", &n);

	while (n < 1){

		printf("Errore, inserire numero corretto\n");	
		scanf("%d", &n);
	
	}
	conta = 0;

	for (i=2; i<n; i++) {

	if 	(n % i == 0)
		conta=1;

	} 

	if (conta == 0)
		printf("1\n");

		else
			printf("0\n");

	return 0;
}