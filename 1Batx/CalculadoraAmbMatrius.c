#include <stdio.h>

float sumar(){
	float resultado=0;
	int cantnum;
	printf("Cuants nombres tens per a sumar?\n");
	scanf("%d", &cantnum);
	for(int i=0;i<cantnum;i++){
		float num;
		printf("Inserte numero:\n");
		scanf("%f", &num);
		resultado+=num;
	}
return resultado;	
}

float restar(){
	float resultado=0;
	int cantnum;
	printf("Cuants nombres tens per a restar?\n");
	scanf("%d", &cantnum);
	printf("Primer numero?:");
		scanf("%f", &resultado);
	for(int i=0;i<cantnum-1;i++){
		float num;
		printf("Inserte numero:\n");
		scanf("%f", &num);
		resultado-=num;
	}
return resultado;	
}

float multiplicar(){
	float resultado=0;
	int cantnum;
	printf("Cuants nombres tens per a multiplicar?\n");
	scanf("%d", &cantnum);
	for(int i=0;i<cantnum;i++){
		float num;
		printf("Inserte numero:\n");
		scanf("%f", &num);
		resultado*=num;
	}
return resultado;	
}

int main(){
	int opcion=0;
	do{
		printf("\n\n\n   ===MENU===\n\n");
		printf(" Opciones:\n  1-Suma\n  2-Resta\n  3-Multiplicar\n  4-Dividir\n  5-Salir\n");
		scanf("%d", &opcion);
		switch(opcion){
			case 1:
				printf("Resultado: %f", sumar());
				break;
			case 2:
				printf("Resultado: %f", restar());
				break;
			case 3:
				printf("Resultado: %f", multiplicar());
				break;
			/*case 4:
				printf("Resultado: %f", dividir());
				break;
			case 5:
				printf("Saliendo del programa...\n");*/
			default:
				printf("Opción no válida\n");
		}
	}while(opcion!=5);
return 0;
}
