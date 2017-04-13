#include<stdio.h>
int main()
{
    long long int H,max,i,j,k,temp;
    while(1){
        scanf("%lld",&H);
        if(H==0){
            break;
        }
        temp=H;
        max=temp;
        while(temp>1){
            if(temp%2!=0){
                temp=temp*3+1;
            }
            else if(temp%2==0){
                temp=temp/2;
            }
            if(temp>=max){
                max=temp;
            }
        }
        printf("%lld\n",max);
    }
    return 0;
}
