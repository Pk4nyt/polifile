#include<stdio.h>

int main (){
  int a, b, mcd, mcm;

  scanf("%d %d", &a , &b)

  if (a>b)
  	mcdc = b;
  else
  	mcd = a;

  while (a%mcd !=0 || b%mcd !=0){   /*not nega quello che c' è sulla destra */
    mcd = mcd -1;
}
  mcm = a * b/ mcd;

  printf("%d %d\n",mcd, mcm ); 

return 0;
}