#include<stdio.h>
int main()
{
    int X,Y;
    float total;
    scanf("%d",&X);
    switch(X)
    {
        case 1:
            scanf("%d",&Y);
            total=Y*4.00;
            printf("Total: R$ %.2f\n",total);
            break;
        case 2:
            scanf("%d",&Y);
            total=Y*4.50;
            printf("Total: R$ %.2f\n",total);
            break;
        case 3:
            scanf("%d",&Y);
            total=Y*5.00;
            printf("Total: R$ %.2f\n",total);
            break;
        case 4:
            scanf("%d",&Y);
            total=Y*2.00;
            printf("Total: R$ %.2f\n",total);
            break;
        case 5:
            scanf("%d",&Y);
            total=Y*1.50;
            printf("Total: R$ %.2f\n",total);
            break;
    }
    return 0;
}
