#include<stdio.h>
#define N 4

m[i][j] == m[j][i]	//dobbiamo verificare la simmetria

int main (){
	int m[N] [N], i , j;
	int simmetrica;

	for (i=0; i<N; i++){
		for (j=0; j<N, j++){
			scanf("%d", &m[i][j]);
		}
	}

	for (i=0, simmetrica = 1; i<N && simmetrica; i++){
		for (j=0; j<N && simmetrica; j++){
			if (m[i][j] != m[j][i])
				simmetrica = 0;
		}
	}

	/* versione ottimizzata
	for(i=0, simmetrica=1; i<N && simmetrica; i++){
		for (j=i+1; j<N && simmetrica; j++){
			if (m[i][j] != m[j][i])
				simmetrica = 0
		}
	}
													*/
	return 0;
}