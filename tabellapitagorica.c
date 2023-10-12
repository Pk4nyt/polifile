#include<stdio.h>/*CICLO FOR CHE COMPATTA TUTTO TRANNE IL CORPO DEL CICLO*/
#define INIZIO 1
#define FINE 10

int main(){
	int riga, colonna;

	for (riga = INIZIO; riga <= FINE; riga ++){
		for (colonna =INIZIO; colonna <= FINE; colonna ++)
			printf ("%3d", riga * colonna);
		printf("\n");
	}



	return 0;
}
