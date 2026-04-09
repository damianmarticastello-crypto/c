/******************************
 * Conversor de temperaturas **
 * Damián Martí Castelló     **
 *20/11/25                   **
 * ***************************/


#include <stdio.h>


int main(){



//variables

    double temp, resultat;
    int from=0, to=0;



//preguntes

    while((from < 1 ) || (from > 3))
    {
        printf("¿Quina tempertatura tens?:\n\n Kelvin (1)\n Celsius (2)\n Farenheit(3)\n");
        scanf("%d", &from);
    }

    while((to<1) || (to>3))
    {
        printf("¿A quina ho vols pasar?:\n Kelvin (1)\n Celsius (2)\n Farenheit(3)\n");
        scanf("%d",&to);
    }

    printf("Nombre de la tempertatura: \n");
    scanf("%lf",&temp);



// ifs


    if(from==1){
            //from 1 to x  //dentro if(from==1)
            if(to==1){
                printf("¡¡són iguals!!\n");

            }else if(to==2){
                resultat= (temp)-273.15;
                printf("temperatura= %.2fºC\n", resultat);

            }else if (to==3){
                resultat= (((temp)-273.15)*1.8)+32;
                printf("temperatura= %.2fºf\n", resultat);


            // from 2 to x  //fora if(from==1)
            }}else if(from==2){
                if(to==1){
                    resultat= (temp)+273.15;
                    printf("temperatura= %.2fºk\n", resultat);

                }else if(to==2){
                    printf("¡¡Són iguals!!\n");

                }else if(to==3){
                    resultat= ((temp)*1.8)+32;
                    printf("temperatura= %.2fºf\n", resultat);


            //fron 3 to x  //fora if(from==2) & if(from==1)
            }}else if(from==3){
                if(to==1){
                    resultat= (((temp)-32)*(5.0/9.0))+273.15;
                    printf("temperatura= %.2fºk\n", resultat);

                }else if(to==2){
                    resultat= (((temp)-32)*(5.0/9.0));
                    printf("temperatura= %.2fºc\n", resultat);

                }else if(to==3){
                   printf("¡¡Són iguals!!\n");
                }}


return 0;
}
