#include<stdio.h>

int main (){
	char c;
	scanf("%c",&c);
	printf("%c\n",c );
	scanf("%c", &c);     /* metto uno spazio in questa scanf */
	printf("%c\n",c );

	return 0;
}