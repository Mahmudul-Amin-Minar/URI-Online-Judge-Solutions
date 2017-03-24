#include<stdio.h>
int main()
{
    int a,b,t;
    scanf("%d %d",&a,&b);
    if(a>=b){
        t=(24-a)+b;
    }
    else{
        t=b-a;
    }
    printf("O JOGO DUROU %d HORA(S)\n",t);
    return 0;
}
