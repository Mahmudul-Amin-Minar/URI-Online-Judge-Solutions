#include<stdio.h>
int main()
{
    int N,hour,min,sec,ex1,ex2;
    scanf("%d",&N);
    hour=N/(60*60);
    ex1=N%(60*60);
    min=ex1/60;
    ex2=ex1%60;
    sec=ex2;
    printf("%d:%d:%d\n",hour,min,sec);
    return 0;
}
