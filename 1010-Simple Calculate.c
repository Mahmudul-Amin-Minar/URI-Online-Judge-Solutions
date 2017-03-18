#include<stdio.h>
int main()
{
    int p_code1,unit1,p_code2,unit2;
    float p_price1,p_price2,total;
    scanf("%d %d %f\n%d %d %f",&p_code1,&unit1,&p_price1,&p_code2,&unit2,&p_price2);
    total=(unit1*p_price1)+(unit2*p_price2);
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
