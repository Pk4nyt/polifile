#include<stdio.h>
#define PI 3.14
int main(){
	float raggio, area , perimetro;
	scanf("%f", &raggio);
	area = raggio * raggio * PI;
	perimetro = 2 * PI * raggio;
	printf("%f %f \n",area, perimetro );
	return 0;

}