#include <stdio.h>
#define MAX 5
#define MIN 1

int main (){
	int m1[MAX][MAX], m2[MAX][MAX], r[MAX][MAX];
	int n;

	scanf("%d", &n);
	while (n > MAX || n < MIN)
		scanf("%d", &n);

	for(i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf ("%d", &m1[i][j]);

	for(i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf ("%d", &m2[i][j]);

	//inizializzazione?
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			for (k=0, r[i][j]; k<n; k++)
				r[i][j] +=	m1 [i][k] * m2[k][j];

	//stampo
			for(i=0; i<n; i++) {
				for(j=0; j<n; j++){
					printf("%d", r[i][j]);
				}
				printf("\n");

			}

	return 0;
}