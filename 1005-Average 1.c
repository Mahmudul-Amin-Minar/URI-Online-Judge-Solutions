#include<stdio.h>
int main()
{
    float x,y,MEDIA;
    scanf("%f %f",&x,&y);
    MEDIA = ((x*3.5)+(y*7.5))/(3.5+7.5);
    printf("MEDIA = %.5f\n",MEDIA);
    return 0;
}
