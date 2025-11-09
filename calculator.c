/****************************************************************
 * La calculadora amb un menú per a + - * i /                   *
 * Xavi Blanes curs: 25/26                                      *
 * Completa el codi...                                          *
 * *************************************************************/

#include <stdio.h>   



void main(){
    float m, n, resultado;
    int opcio;

    printf("Introduix el primer número: ");
    scanf("%f", &m);
    printf("Introduix el segon número: ");
    scanf("%f", &n);

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
printf("RESULTADO: %f\n", resultado);

return;
}



//double, %.2f\n, %lf
//float, %f\n, %f































