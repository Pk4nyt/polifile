#include<stdio.h>
#define DIM 20

int main(){
	int a[DIM], b[DIM], i, dim_b, trovato; //trovato è il flag

	for (i = 0; i < DIM; i++)
		scanf ("%d", &a[i]);

	for (i = 0, dim_b = 0; i < DIM; i++){
		for (j = 0, trovato = 0; j < 1 && !trovato; j++)
			if (a [j] == a [i])
				trovato = 1;
		if (!trovato){
			b[dim_b] = a[i];

		}
	}
	for (i = 0; i < dim_b; i++)
		printf("%d\n", b[i]);

	return 0;
}