#include<stdio.h>

int main(){
	int s1[N], s2[N];
	int perm;
	int i, j;

	for (i=0; i<N; i++){
		printf("s1 valore%d", i);
		scanf("%d", s1[N]);
	
	}

	for (j=0; j<N; j++){
		printf("s2 valore%d", j);
		scanf("%d", &s2[i]);

	}

	
	for (i=0; perm=1; i<N && perm; i++){
		//contiamo in s1
		for (j=0, c1=0 j<N; j++){
			if (s1[j] == s1[i])
				c1++;
		}
		//contiene in s2
		for (j=0, c2=0, j<N; j++){
			if (s2[j] == s1[i])
				c2++;
		}
		perm = !(c1-c2);
		// o equivalente
		// if (c1 != c2)
		//	perm = 0
	} 

	printf("%d\n", perm);


	return 0;
}