#include<stdio.h>
int main()
{
    int i,j,k,max=0,pos,num;
    for(i=1; i<=100; i++){
        scanf("%d",&num);
        if(num>max){
            max=num;
            if(num==max){
                pos=i;
            }
            else{
                continue;
            }
        }
    }
    printf("%d\n",max);
    printf("%d\n",pos);
}
