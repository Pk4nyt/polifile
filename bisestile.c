#include<stdio.h>

int main (){
	int anno, bisestile;
	scanf("%d", &anno);
	bisestile = (anno%4 == 0 && anno%100 != 0 || anno % 400 == 0);
	printf("%d\n", bisestile);
	return 0;
}