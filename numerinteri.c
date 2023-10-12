#include<stdio.h>

int main (){
	printf("Inserire numero intero\n");
	int num;
	scanf("%d" , &num);

	if (num > 0){
		printf("positivo\n");
}	else if(num < 0){
		printf("negativo\n");
}	else {
		printf("nullo\n");

	}

	return 0;
}

