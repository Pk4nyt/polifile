#include<stdio.h>
#define DIM 10

int main(){
	int h[DIM], i, num;

	for (i = 0; i < DIM; i++)
		h[i] = 0,

	scanf("%d", &num);
	while (num >= 0 && num < DIM){
		h[num]++;
		scanf("%d", &num);
	}

	for (i = 0; i < DIM; i++){
		printf("%d", i);
		for (j = 0; j < h[i]; j++)
			printf("*");
		printf("\n");
	}	 

	return 0;
}