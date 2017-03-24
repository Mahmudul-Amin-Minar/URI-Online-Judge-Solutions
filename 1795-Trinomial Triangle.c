#include<stdio.h>
int main()
{
    long long int R,sum,i;
    while(scanf("%lld",&R)!=EOF){
        sum=3;
        if(R==0){
            printf("1\n");
        }
        else{
            for(i=1; i<R; i++){
                sum=sum*3;
            }
            printf("%lld\n",sum);
        }
    }
    return 0;
}
