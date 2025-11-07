/****************************************************************
 * La calculadora amb un menú per a + - * i /                   *
 * Xavi Blanes curs: 25/26                                      *
 * Completa el codi...                                          *
 * *************************************************************/

#include <stdio.h>   



void main(){
    double m, n, resultado; 
    int opcio;

    printf("Introduix el primer número: ");
    scanf("%lf", &m);
    printf("Introduix el segon número: ");
    scanf("%lf", &n);

    while((opcio < 1) || (opcio > 4))
    {
        printf("Quina operació vols fer --> 1 (suma), 2(resta), 3 (multiplicació) i 4 (divisió): ");
        scanf("%d", &opcio);
    }
      
    if(opcio == 1){
       resultado = m+n;
       };
    if(opcio == 2){
       resultado = m-n;
       };
    if(opcio == 3){
       resultado = m*n;
       };
    if(opcio == 4){
       resultado = m/n;
       };
printf("RESULTADO: %.2f\n", resultado);

return;
}



































