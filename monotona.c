#include <stdio.h>

int main (){
	int prec, curr;

	scanf("%d", &prec);
	if (prec != 0) {
		scanf("%d", &curr);
		monotona = 1;
		while (curr != 0 && monotona == 1) {
			if (prec > curr)
				monotona = 0;
			else{
				prec = curr;
				scanf("%d", &curr);
			}
		}
	}	else
			printf ("Vuota\n");

	return 0;
}