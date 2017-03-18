#include<stdio.h>
#define spent 12
int main()
{
    int hour,velocity,dis;
    float fuel;
    scanf("%d %d",&hour,&velocity);
    dis=hour*velocity;
    fuel=(float)dis/spent;
    printf("%.3f\n",fuel);
}
