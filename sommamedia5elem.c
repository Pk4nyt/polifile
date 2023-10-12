#include<stdio.h>
#define MAX 30
#define N 2 


int main(){
	int seq[MAX];
	float media [MAX];
	int i, j;
	int somma, nElem;

	for (i=0; i<MAX; i++){
		scanf("%d", &seq[i]);

	for (i=0; i<MAX; i++){
		for (j=i-N; j<=i+N; j++){
			if(j >= 0 && j < MAX){
				somma += seq[j];
				nElem += 1;
			}
		}

		media[i] = (float) somma/nElem;

	}

	
	return 0;
}