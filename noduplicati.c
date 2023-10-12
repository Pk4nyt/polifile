#include<stdio.h>
#define DIM 10
int main(){
		int seq [DIM], i, j;
		int nodupl;

		for (i=0; i<MAX; i++) {
			scanf("%d", &seq[i]);
		}

		nodupl=1;
		//soluzione 1
		for (i=0; i<MAX && nodupl; i++){
			for (j=0; j<max; j++){
				if (i!=j && seq[i] == seq[j])
					nodupl = 0;

		}

		//soluzione 2

		for (i=0; i<MAX-1 && nodupl; i++){
			for(j=i+1; j<MAX && nodupl; j++){
				if(seq[i] == seq[j])
					nodupl = 0;

			}
		}
		

		printf("%d\n", nodupl);
	return 0;
}