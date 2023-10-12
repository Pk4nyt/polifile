#include <stdio.h>

int main (){
	int voto;

	scanf("%d", &voto);
	while(voto < 0 || voto > 30) {
			printf("Errore\n");
			scanf("%d",&voto);
	}

	if (voto < 10)
		printf("grav. insuff.\n");

    else if (voto >= 10 && voto <= 17) 
		printf("insuff.\n");
    
	

    else if  (voto >= 18 && voto <= 24)
  		printf("suff.\n");
   
  	

    else
  		printf("ottimo\n");
  

 
	return 0;
}