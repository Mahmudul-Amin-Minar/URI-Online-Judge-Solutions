#include<stdio.h>
int main()
{
    int X,n;
    scanf("%d",&X);
    for(n=0; n<6; n++){
        if(X%2==0){
           X+=1;
        }
        else{
            X+=2;
        }
        printf("%d\n",X);
    }
}
