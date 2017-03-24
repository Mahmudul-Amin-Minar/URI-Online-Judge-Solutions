#include<stdio.h>
int main()
{
    long long int N,i;
    scanf("%lld",&N);
    if(N==0){
        return 0;
    }
    else{
        printf("Ho");
        for(i=0; i<N-1; i++){
            printf(" Ho");
        }
        printf("!");
        printf("\n");
    }
    return 0;
}
