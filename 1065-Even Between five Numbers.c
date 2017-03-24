#include<stdio.h>
int main()
{
    int a,n,count=0;
    for(n=0; n<5; n++){
        scanf("%d",&a);
        if(a%2==0){
            count+=1;
        }
    }
    printf("%d valores pares",count);
    printf("\n");
}
