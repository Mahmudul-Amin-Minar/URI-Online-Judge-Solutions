#include<stdio.h>
int main()
{
    int num,hour;
    float pay,salary;
    scanf("%d %d %f",&num,&hour,&pay);
    salary=hour*pay;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;
}
