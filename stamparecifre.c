#include <stdio.h>
#define BASE 10

int main(){
	
	int n;
	int pot;

	scanf("%d", &n);

	// MINORE O MINORE UGUALE ME LO CHIEDO
	// ALLA FINE SERVE

	for (pot = 1; pot * BASE <= n; pot *= BASE)

	//GESTIRE LO ZERO
	while ( n > 0) {
		cifra = n / pot;
		printf("%d\n", cifra);
		n = n % pot;
		pot /= BASE;
	}
	
	return 0;
}