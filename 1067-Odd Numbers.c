#include<stdio.h>
int main()
{
    int X,n;
    scanf("%d",&X);
    for(n=1; n<=X; n++){
        if(n%2==0){
            continue;
        }
        printf("%d\n",n);
    }
}
