#include<stdio.h>
int main()
{
    int N,X,n,in=0,out=0;
    scanf("%d",&N);
    for(n=0; n<N; n++){
        scanf("%d",&X);
        if(X>=10 && X<=20){
            in+=1;
        }
        else{
            out+=1;
        }
    }
    printf("%d in\n%d out\n",in,out);
    return 0;
}
