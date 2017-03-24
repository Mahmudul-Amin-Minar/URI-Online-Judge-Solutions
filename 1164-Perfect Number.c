#include<stdio.h>
int main()
{
    int N,X,i,j,sum;
    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%d",&X);
        sum=0;
        for(j=1; j<X; j++){
            if(X%j==0){
                sum+=j;
            }

        }
        if(sum==X){
            printf("%d eh perfeito\n",X);
        }
        else{
            printf("%d nao eh perfeito\n",X);
        }

    }
    return 0;
}
