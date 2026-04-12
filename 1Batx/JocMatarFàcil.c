#include <stdio.h>

int main(){
	int bolean=1;
	
	
	while( bolean != 0){
		printf("\nJOC DE MATAR\n");
		printf(" Vols jugar?--> si:1   no:0\n  ");
		scanf("%d", &bolean);
		
		if(bolean==0){
			break;
		}
		else{	
			int vida=500;
			char daño;
			const int puñetazo=-10, patada=-25, disparo=-70, bazooka=-500;
			printf("\nCOMIENZA EL JUEGO\n");
			printf("-p:puñetazo\n-t:patada\n-d:disparo\n-b:bazooka\n");
			printf("\n Vida: %d\n  ", vida);
			do{	
				scanf(" %c", &daño);
				if(daño=='p'){
					vida+=puñetazo;
				}
				if(daño=='t'){
					vida+=patada;
				}
				if(daño=='d'){
					vida+=disparo;
				}
				if(daño=='b'){
					vida+=bazooka;
				}	
				printf(" Vida: %d\n  ", vida);
			}while(vida>0);
		}
	}		
return 0;	
}


