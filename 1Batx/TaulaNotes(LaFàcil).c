#include<stdio.h>

int main(){
	int nm, na, i, ii;
	printf("\nCuantes materies hi han?: \n");
	scanf("%d", &nm);
	char materies[nm][50];
	float notes[nm];
	
	for(i=0; i<nm; i++){
		printf(" Nom asignatura:");
		scanf(" %s", materies[i]);
	}
	
	printf("\nCuants alumnes hi han?:");
	scanf("%d", &na);
	char alumnes[na][50];
	
	
	for(ii=0; ii<na; ii++){
		printf("\n\n\nNom alumne: ");
		scanf("%s", alumnes[na]);
		printf("\n");
		for(i=0; i<nm; i++){
			printf("Materia: %s    ", materies[i]);
			printf("  Nota: ");
			scanf(" %f", &notes[i]);
		}	
	}
	
	printf("\n\n\n\n");
	
	for(ii=0; ii<na; ii++){
		printf("Alumne:%s\n", alumnes[na]);
		for(i=0; i<nm; i++){
			printf("Materia: %s    ", materies[i]);
			printf("Nota: %f", notes[i]);
			printf("\n");
		
		}
	printf("\n\n");
	}
	
	
	
	
	
	
	
	
	
	
return 0;
}
