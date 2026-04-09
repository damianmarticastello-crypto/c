#include<stdio.h>



float areatriangulo(){
	float base, altura, resultado;
	printf("Altura?: ");
	scanf("%f", &altura);
	printf("Base?: ");
	scanf("%f", &base);
	resultado= (base*altura)/2;
	
return resultado;
}

float areacuadrado(){
	float base, altura, resultado;
	printf("Altura?: ");
	scanf("%f", &altura);
	printf("Base?: ");
	scanf("%f", &base);
	resultado= base*altura;
return resultado;	
}

float areacirculo(){
	const float pi=3.141592;
	float radio, resultado;
	printf("Radio?: ");
	scanf("%f", &radio);
	resultado= 2*pi*radio;
return resultado;	
}


int main(){
	int opcion;
	float resultado;
	printf("FORMULARIO DE ÁREAS\n");
	
	do{
		printf("Qué opción quieres:\n 1-Triangulo\n 2-Cuadrado\n 3-Circulo\n");
		scanf("%d", &opcion);
		}while(opcion<1 || opcion>3);
	
	if(opcion==1){
		resultado=areatriangulo();
		printf("Triangulo");
	}
	else if(opcion==2){
		resultado=areacuadrado();
		printf("Cuadrado");
	}
	else if(opcion==3){
		resultado=areacirculo();
		printf("Circulo");
	}
	printf(", resultado área= %fm*2\n", resultado);

return 0;	
}
