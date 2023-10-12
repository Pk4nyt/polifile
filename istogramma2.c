#include<stdio.h>
#define DIM 5

int main(){
	int h[DIM], i, j, maxi;

	for (i=0; i<DIM; i++)
		scanf("%d", &h[i]);

	for (maxi=h[0], i=1; i<DIM; i++)
		if (h[i]>maxi)
			maxi = h[i];

	for (i=0; i<maxi; i++){
		for (j=0; j<DIM; j++)
			if (i< maxi - h[j])
				printf(" ");
			else
				printf("* ");
			printf("\n");
	}

	for (i=0;i<DIM; i++)
		printf("%d", &h[i]);
	printf("\n");

	return 0;
}