#include<stdio.h>
int main()
{
    int X;
    float Y,consump;
    scanf("%d %f",&X,&Y);
    consump=X/Y;
    printf("%.3f km/l\n",consump);
    return 0;
}
