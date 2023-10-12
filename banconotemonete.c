#include<stdio.h>
#define BANCONOTA 5
#define MONETE 1

 int main (){
 	int prezzo, restoBanconota, restoMoneta;
 	scanf("%d", &prezzo);

 	restoBanconota = prezzo/BANCONOTA;
 	restoMoneta = prezzo%BANCONOTA;

 	printf("%d %d \n", restoBanconota,restoMoneta);

 	return 0;
 }