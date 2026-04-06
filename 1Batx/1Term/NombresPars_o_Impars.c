#include <stdio.h>

int main(){

	int n,k;
	
	do{
		printf("Saber si un nom enter es par o impar \n");
		printf("Nombre:");
		scanf ("%d", &n);
		
		if(n%2==0){
			printf("Es par \n");
		}
		else{
			printf("Es impar \n");
		}
	
		printf("Vols continuar? (1=si, 2=no)\n");
		scanf("%d", &k);
	} while(k==1);
return 0;
};
