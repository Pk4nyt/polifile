#include<stdio.h>

int main (){
	float gradiCelsius, gradiFahrenheit;
	scanf("%f", &gradiCelsius);
	gradiFahrenheit = gradiCelsius *1.8 + 32.0;
	printf("%f\n", gradiFahrenheit);

	return 0;

}
