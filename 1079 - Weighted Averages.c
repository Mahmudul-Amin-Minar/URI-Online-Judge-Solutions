#include<stdio.h>
int main()
{
    int N,n,m,a;
    scanf("%d",&N);

    float num;
    float sum;
    for(n=0; n<N; n++){
            a=2;
            sum=0;
        for(m=0; m<3; m++){
            scanf("%f",&num);
            if(m==2){
                a=5;
            }
            sum=sum+num*a;
            a+=1;

        }
        printf("%.1f\n",sum/(2+3+5));
    }

}
