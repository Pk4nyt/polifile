#include<stdio.h>
	
int main (){

	int n, i, fatt;
	
	do {
		printf("Inserire numero valido\n");
		scanf("%d", &n);

	} while (n<0);

	fatt = 1;
		for (i=1; i <= n; i++){
		fatt *= i;
	}

	printf("%d\n", fatt);
	
	return 0;
}