#include<stdio.h>
int main()
{
    float A,B,C,p,a;
    scanf("%f %f %f",&A,&B,&C);
    if((A+B)>C && (B+C)>A && (C+A)>B){
        p=A+B+C;
        printf("Perimetro = %.1f\n",p);
    }
    else{
        a=.5*(A+B)*C;
        printf("Area = %.1f\n",a);
    }
}
