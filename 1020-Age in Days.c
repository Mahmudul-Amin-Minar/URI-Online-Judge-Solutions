#include<stdio.h>
int main()
{
    int a,year,month,day,ex1,ex2;
    scanf("%d",&a);
    
    year=a/365;
    ex1=a%365;
    month=ex1/30;
    ex2=ex1%30;
    day=ex2;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
    return 0;
}
