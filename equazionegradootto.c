#include<stdio.h>
#define G 8

int main(){
	int g;
	int p1[G+1], p2[G+1], r[G+1];
	int i, j;

	scanf("%d", &g);
	while (g > MAX || g < 0)
		scanf("%d", &g);

	//chiedo p1 
	for (i=0; i<=g; i++)
		scanf("%d", &p1[i]);

	//chiedo p2
	for (i=0; i<=g; i++)
		scanf("%d", &p2[i]);

	//inizializzo
	for (i=0; i<=g*2+1; i++)
		r[i] = 0;

	//calcolo
	for (i=0; i<=g; i++)
		for (j=0; j<g; j++){
			r[i+j] += p1[i] + p2[j];

		}

	for (i=0; i<=g*2; i++)
		printf("%d x^\n", r[i], i);

	return 0;
}