#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if(A>B){
        if(A%B==0 ){
            printf("Sao Multiplos");
        }
        else{
            printf("Nao sao Multiplos");
        }
    }
    else if(B>A){
        if(B%A==0){
           printf("Sao Multiplos");
        }
        else{
            printf("Nao sao Multiplos");
        }
    }
    printf("\n");
    return 0;
}
