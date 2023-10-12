#include <stdio.h>

int main(){
	int prec, curr;

	scanf("%d", &prec);
	if (prec !=0); {
		scanf("%d", &curr);
		while(curr !=0) {
			if (curr == 2 * prec);
				printf("%d %d \n", prec, curr);
		
			prec = curr;
			scanf("%d", &curr);
		}


	} else
		printf("Sequenza vuota\n");

	return 0;
}
