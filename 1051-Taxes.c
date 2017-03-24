#include<stdio.h>
int main()
{
    float a,t,pay,ex1,ex2,dd;
    scanf("%f",&a);
    if(a>=0 && a<=2000.00){
        printf("Isento");
    }
    else if(a>=2000.01 && a<=3000.00){
        pay=a-2000.00;
        t=pay*.08;
        printf("R$ %.2f",t);
    }
    else if(a>=3000.01 && a<=4500.00){

        pay=a-3000.00;
        ex1=1000*.08;
        t=pay*.18+ex1;
        printf("R$ %.2f",t);
    }
    else if(a>4500.00){

        pay=a-4500.00;
        dd=1000.00*.08;
        ex2=(4500.00-3000.01)*.18;
        t=pay*.28+ex2+dd;
        printf("R$ %.2f",t);
    }
    printf("\n");
    return 0;
}
