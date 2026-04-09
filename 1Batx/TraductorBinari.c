#include <stdio.h>
int main(){
	int x, k=1;
	char letter[200];
	
	printf("Escriu el text: \n");
	
	do{
		for(x=0; x<200; x++){
			scanf(" %c", &letter[x]);
			if (letter[x]=='.'){
				k=0;
				break;
			}
		}	
	}while(k==1);
	
	printf("\nText en binari:");
	
	for(x=0; x<200; x++){
		if (letter[x]=='a'){
			printf("01100001");
		}
		else if (letter[x]=='b'){
			printf("01100010");
		}
		else if (letter[x]=='c'){
			printf("01100011");
		}
		else if (letter[x]=='d'){
			printf("01100100");
		}
		else if (letter[x]=='e'){
			printf("01100101");
		}
		else if (letter[x]=='f'){
			printf("01100110");
		}
		else if (letter[x]=='g'){
			printf("01100111");
		}
		else if (letter[x]=='h'){
			printf("01101000");
		}
		else if (letter[x]=='i'){
			printf("01101001");
		}
		else if (letter[x]=='j'){
			printf("01101010");
		}
		else if (letter[x]=='k'){
			printf("01101011");
		}
		else if (letter[x]=='l'){
			printf("01101100");
		}
		else if (letter[x]=='m'){
			printf("01101101");
		}
		else if (letter[x]=='n'){
			printf("01101110");
		}
		else if (letter[x]=='o'){
			printf("01101111");
		}
		else if (letter[x]=='p'){
			printf("01110000");
		}
		else if (letter[x]=='q'){
			printf("01110001");
		}
		else if (letter[x]=='r'){
			printf("01110010");
		}
		else if (letter[x]=='s'){
			printf("01110011");
		}
		else if (letter[x]=='t'){
			printf("01110100");
		}
		else if (letter[x]=='u'){
			printf("01110101");
		}
		else if (letter[x]=='v'){
			printf("01110110");
		}
		else if (letter[x]=='w'){
			printf("01110111");
		}
		else if (letter[x]=='x'){
			printf("01111000");
		}
		else if (letter[x]=='y'){
			printf("01111001");
		}
		else if (letter[x]=='z'){
			printf("01111010");
		}	
	}
	printf("\n");
	
return 0;	
}
