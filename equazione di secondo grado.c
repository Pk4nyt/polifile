#include <stdio.h>

 int main(){
   float a, b, c, det;

   scanf("%f %f %f ", &a, &b, &c);

   if(a!=0){
   	det= b * b - 4 * a * c;
   	if (det>0)
   		printf("Soluzioni reali e distinte");
   	else if (det=0)
   		printf("Soluzioni reali e coincidenti");
   	else
   		printf("Soluzioni complesse e coniugate");

   } else 
   		printf("Equazione non di secondo grado\n");


  return 0;
}