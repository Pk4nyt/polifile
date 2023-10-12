#include<stdio.h>
#define SOMMA '+'
#define SOTTRAZIONE '-'
#define MOLTIPLICAZIONE '*'
#define DIVISIONE '/'

	int main (){
	  float a, b, ris;
	  char op;

	  scanf("%f %f %c", &a , &b , &op);

	if (op==SOMMA || op==SOTTRAZIONE ||
		op==MOLTIPLICAZIONE || op==DIVISIONE && b != 0){
		if (op==SOMMA)
			ris = a+b;
		else if (op==SOTTRAZIONE)
			ris = a-b;
		else if (op==MOLTIPLICAZIONE)
			ris = a * b;
		else
			ris = a / b;
		printf("%f %c %f = %f\n", a, op, b, ris );

		}


	return 0;

}