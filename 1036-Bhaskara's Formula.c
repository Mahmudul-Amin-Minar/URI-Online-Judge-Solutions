#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,R1,R2,d,s;
    scanf("%f %f %f",&A,&B,&C);
    d=((pow(B,2))-4*A*C);

    if(A!=0 && d>0){
        s=sqrt(d);
        R1=(-B+s)/(2*A);
        R2=(-B-s)/(2*A);
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}
