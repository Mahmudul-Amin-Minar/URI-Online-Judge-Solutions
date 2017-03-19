#include<stdio.h>
int main()
{
    double A,B,C,A1,B1,C1;

    scanf("%lf %lf %lf",&A,&B,&C);

    if(0<A && 0<B && 0<C){
        if(A>=B && B>=C){
            A1=A;
            B1=B;
            C1=C;
        }
        else if(A>=C && C>=B){
            A1=A;
            B1=C;
            C1=B;
        }
        else if(B>=A && A>=C){
            A1=B;
            B1=A;
            C1=C;
        }
        else if(B>=C && C>=A){
            A1=B;
            B1=C;
            C1=A;
        }
        else if(C>=A && A>=B){
            A1=C;
            B1=A;
            C1=B;
        }
        else if(C>=B && B>=A){
            A1=C;
            B1=B;
            C1=A;
        }


        if(A1>=(B1+C1)){
            printf("NAO FORMA TRIANGULO\n");
            return 0;
        }
        if((A1*A1) < (B1*B1 + C1*C1)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if((A1==B1 && B1==C1 && C1==A1)){

            printf("TRIANGULO EQUILATERO\n");
        }

        if((A1*A1) == (B1*B1 + C1*C1)){
            printf("TRIANGULO RETANGULO\n");
        }
        if((A1*A1) > (B1*B1 + C1*C1)) {
            printf("TRIANGULO OBTUSANGULO\n");

        }
        if((A1==B1 || B1==C1 || C1==A1) && (A1!=B1 || B1!=C1 || C1!=A1)){
            printf("TRIANGULO ISOSCELES\n");
        }

    }
    return 0;
}

