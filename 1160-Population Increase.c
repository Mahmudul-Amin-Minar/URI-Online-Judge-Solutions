#include<stdio.h>
int main()
{
    int PA,PB,T,n,i,p,d,q,e;
    float G1,G2;
    scanf("%d",&T);
    for(i=0; i<T; i++){
        scanf("%d %d %f %f",&PA,&PB,&G1,&G2);
        d=PA;
        e=PB;
        n=0;
        while(p<=q){
            p=d+d*(G1/100);
            q=e+e*(G2/100);
            d=p;
            e=q;
            n++;
            if(n>100){
                break;
            }
        }
        if(n>100){
            printf("Mais de 1 seculo.\n");
        }
        else{
            printf("%d anos.\n",n);
        }
        p=0;
        q=0;
    }
    return 0;
}
