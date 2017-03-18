#include<stdio.h>
#define pi 3.14159
int main()
{
    float A,B,C,tra,cicle,trape,sqr,rect;
    scanf("%f %f %f",&A,&B,&C);
    tra=0.5*A*C;
    cicle=pi*C*C;
    trape=0.5*(A+B)*C;
    sqr=B*B;
    rect=A*B;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",tra,cicle,trape,sqr,rect);
}
