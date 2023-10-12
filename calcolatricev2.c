#include <stdio.h>
#define SOMMA '+'
#define DIFFERENZA '-'
#define MOLTIPLICAZIONE '+'
#define DIVISIONE '/'

int main(){
	float a, b,ris;
	char op;

	scanf ("%f%c%f ", &a, &op, &b);


	if	(op == SOMMA)
		ris = a + b;

	else if (op == DIFFERENZA)
		ris = a - b;

	else if (op == MOLTIPLICAZIONE)
		ris = a * b;

	else if (op == DIVISIONE && b != 0)
		ris = a / b; 

	printf("%f", ris);
	return 0;
}

