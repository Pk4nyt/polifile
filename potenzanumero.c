#include<stdio.h>

int main () {
	int n,m;
	int abs_m;
	float ris;

	scanf("%d %d", &n, &m);
	while (n==o && m<=0){
		printf("Errore\n");
		scanf("%d %d", &n, &m);
	}

	abs_m = m;
	if (abs_m < 0)
		abs_m = -abs_m;
	
	ris = 1;
	while (abs_m > 0) {
		ris = ris * n;
		abs_m--;
	}

	if (m < 0)
		ris = 1/ris;

	printf("%f\n", ris );
	
	return 0;
}