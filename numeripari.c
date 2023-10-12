#include <stdio.h>
#define BASE 10

int main (){
	int n;

	scanf("%d", &n);
	while (n <= 0){
		printf("Solo positivi\n");
		scanf("%d", &n);
	}
	
	contiene_dispari = 0;
	while (n > 0 && contiene_dispari == 0) {
		contiene_dispari = (n % 2)
		n = n / BASE;

	}

	printf("%d\n", !contiene_dispari);

	return 0;
}