/*Adivina el nombre******
**Damián Martí Castelló**
**13-04-2026************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  
	char jugar='s';
	while(jugar=='s'||jugar=='S'){
    
		printf("\n\nJOC D'ADIVINAR EL NOMBRE\n(del 1 al 100)\n");
		printf(" Vol jugar?-->(Si=s, No=n): ");
		scanf(" %c", &jugar);
		if(jugar=='n'||jugar=='N'){
			printf("Saliendo...\n");
			break;
		}
		else if(jugar== 's'||jugar=='S'){
			int nomintents, intents=0, intjugador,nombresecret;
			printf("Comença el joc\n");
			printf(" Inserte el nombre d'intents: ");	
			scanf("%d", &nomintents);
			srand(time(NULL));
			nombresecret=rand()%100 + 1;
			while(intents<nomintents){
				intents++;
				printf(" Intents: %d de %d\n", intents, nomintents);
				scanf("%d", &intjugador);
				if(nombresecret<intjugador){
					printf("El nombre es mes petit\n");
				}
				else if(nombresecret>intjugador){
					printf("El nombre es mes gran\n");
				}
				else if(nombresecret==intjugador){
					printf("¡¡¡HAS GUANYAT!!!\n");
					break;
				}
			}
			if(nombresecret!=intjugador){
				printf("\nHAS PERDUT\n");
			}	
		}
		
		else if(jugar!='s' && jugar!='S' && jugar!='n' && jugar!='N'){
			printf("\n\n Opció no válida\n");
			jugar='s';
		}
	}
return 0;
}
