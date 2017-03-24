#include<stdio.h>
int main()
{
    float a;
    int n,count=0;
    for(n=0; n<6; n++){
        scanf("%f",&a);
        if(a>0){
            count+=1;
        }
    }
    printf("%d valores positivos\n",count);
    return 0;
}
