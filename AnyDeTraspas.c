/********************************
 * programa en c que inmplementa
 * el programa d'any de traspàsd
 * Damián Martí Castelló curs:25/26
 *****************************/

#include <stdio.h>
int main(){
    int any;
    printf("Introdueix l'any: ");
    scanf("%d", &any);
    if(any%4==0)
        if(any%100==0)
            if(any%400==0)
                printf("Sí que es traspàs\n");
    else printf("No és de traspás\n");
    else printf("Sí que es traspàs\n");
    else printf("No és de traspás\n");
    return 0;
}
