#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    double pay,sold,total;
    scanf("%s %lf %lf",name,&pay,&sold);
    total=pay+(sold*0.15);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;

}
