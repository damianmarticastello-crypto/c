/***************************
 *Equaciò de segón grau   *
 * Damián Martí Castelló   *
 * (9/11/2025)  1Batx      *
 **************************/

#include <stdio.h>
#include <math.h>


void main() {

    float a, b, c, discriminant, discriminantreal, x1, x2;
    printf("x²: ");
    scanf ("%f", &a);
    printf ("x: ");
    scanf ("%f", &b);
    printf ("nombre: ");
    scanf ("%f", &c);

    if (a==0) printf ("És una equcació de 1ºgrau ");
    else {
        discriminant= sqrt((b*b)+(-4*(a*c)));
        x1= (-b+discriminant)/(2*a);
        x2= (-(b)-(discriminant))/(2*a);
        printf("x1:%f\nx2:%f\n", x1, x2);

        }

return;
}


// #include <math.h>, (en konsole): gcc x -o x -lm

// #include <math.h>= declarciò per poder fer operacions matemàtiques mes enllà de: sumes, restes, multiplicacions i dicisions.
