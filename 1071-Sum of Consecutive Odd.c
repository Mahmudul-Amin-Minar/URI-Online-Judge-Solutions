#include<stdio.h>
int main()
{
    int n,X,Y,sum=0;
    scanf("%d %d",&X,&Y);
    if(X>Y){
        for(n=Y+1; n<X; n++){
            if(n%2!=0){
                sum+=n;
            }
        }
    }
    else{
        for(n=Y; n>X; n--){
            if(n%2!=0){
                sum+=n;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
