#include<stdio.h>
int main()
{
    double N;
    double mul1,mul2,mul3,mul4,mul5,mul6,mul7,mul8,mul9,mul10,mul11,ex1,ex2,ex3,ex4,ex5,ex6,ex7,ex8,ex9,ex10,ex11;
    scanf("%lf",&N);
    int a,b,c,d,e,f,a1,b1,c1,d1,e1,f1;
    a=N/100;
    mul1=a*100;
    ex1=N-mul1;
    b=ex1/50;
    mul2=b*50;
    ex2=ex1-mul2;
    c=ex2/20;
    mul3=c*20;
    ex3=ex2-mul3;
    d=ex3/10;
    mul4=d*10;
    ex4=ex3-mul4;
    e=ex4/5;
    mul5=e*5;
    ex5=ex4-mul5;
    f=ex5/2;
    mul6=f*2;
    ex6=ex5-mul6;
    a1=ex6/1;
    mul7=a1*1;
    ex7=ex6-mul7;
    b1=ex7/0.50;
    mul8=b1*0.50;
    ex8=ex7-mul8;
    c1=ex8/0.25;
    mul9=c1*0.25;
    ex9=ex8-mul9;
    d1=ex9/0.10;
    mul10=d1*0.10;
    ex10=ex9-mul10;
    e1=ex10/0.05;
    mul11=e1*0.05;
    ex11=ex10-mul11;
    f1=ex11/0.01;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",a,b,c,d,e,f,a1,b1,c1,d1,e1,f1);
    return 0;
}
