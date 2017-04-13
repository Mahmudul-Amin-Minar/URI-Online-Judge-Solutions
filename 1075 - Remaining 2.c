#include<stdio.h>
int main()
{
    int N,n;
    scanf("%d",&N);
    for(n=1; n<=10000; n++){
        if(n%N==2){
            printf("%d\n",n);
        }
    }
    return 0;
}
