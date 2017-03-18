#include<stdio.h>
int main()
{
    int N,F1,F2,i,t;
    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%d %d",&F1,&F2);
        do{
            t=F2;
            F2=F1%F2;
            F1=t;
        }
        while(F2!=0);
        printf("%d\n",F1);
    }
    return 0;

}

