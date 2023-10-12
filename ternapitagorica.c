#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);

	if (a*a+b*b == c*c || b*b+c*c == a*a || c*c+a*a == b*b)
		printf("1\n");

	else
		printf("0\n");
	return 0;
}