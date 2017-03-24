#include<stdio.h>
int main()
{
    float a,ave,sum=0;
    int n,count=0;
    for(n=0; n<6; n++){
        scanf("%f",&a);
        if(a>0){
            count+=1;
            sum=sum+a;
        }
    }
    ave=sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",ave);
}
