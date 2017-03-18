#include<stdio.h>
#include<math.h>
#define pi 3.14159
int main()
{
    int R;
    double vol;
    scanf("%d",&R);
    vol=(4.0/3)*pi*(pow(R,3));
    printf("VOLUME = %.3f\n",vol);
    return 0;
}
