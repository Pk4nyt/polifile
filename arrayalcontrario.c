#include<stdio.h>
//devo definire una costante per far funzionare l'array
#define DIM 5

int main(){
	int array [DIM], i;		//ho dichiarato una variabile che contine 5 valori di tipo intero,
							//che succede in memoria? riservo nella memoria 5 posti, come le indico? con indici
	for (i=0; i<DIM; i++)
		scanf("%d", &array [i]);
										//array [0], array [1], array [2], array [3], array [4]
	for (i=DIM-1; i>=0; i--)
		printf("%d\n", array [i]);		//devo contare per assegnare i vari array
	
	return 0;
}