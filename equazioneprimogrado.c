#include<stdio.h>

int main (){
	float a, b, x;
	scanf("%f %f", &a,&b);

	if (a != 0){
		x = (- b) / a;
		printf("%f", x);
	}
	else if (b != 0)
		printf("Impossibile");

	else 
		printf("Indeterminata");

	return 0;
}
