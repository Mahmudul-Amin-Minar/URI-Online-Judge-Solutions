#include<stdio.h>
int main()
{

    int N,a1,b1,c1,d1,e1,f1,g1;
    scanf("%d",&N);
    int a=100,b=50,c=20,d=10,e=5,f=2,g=1,ex1,ex2,ex3,ex4,ex5,ex6;

    a1=N/a;
    ex1=N%a;
    b1=ex1/b;
    ex2=ex1%b;
    c1=ex2/c;
    ex3=ex2%c;
    d1=ex3/d;
    ex4=ex3%d;
    e1=ex4/e;
    ex5=ex4%e;
    f1=ex5/f;
    ex6=ex5%f;
    g1=ex6/g;
    
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",N,a1,b1,c1,d1,e1,f1,g1);
}
