#include<stdio.h>

int matriu[3][3]={{1,0,0}, {0,1,0}, {0,0,1}};

int main(){
	for(int y=0; y<3; y++){
		for(int x=0; x<3; x++){
			printf("%d", matriu[y][x] );
		}
		printf("\n");
	}
	
return 0;	
}
