#include<stdio.h>
long long int height[230];

int main()
{
    long long int n,nc,i,j,k,h,l;
    scanf("%lld",&n);
    for(k=0; k<n; k++){
        scanf("%lld",&nc);
        for(i=0; i<nc; i++){
            scanf("%lld",&h);
            height[h]++;
        }
        l=1;
        for(i=20; i<=230; i++){
            for(j=1; j<=height[i]; j++,l++){
                printf("%lld",i);
                if(l!=nc){
                    printf(" ");
                }
            }
            height[i]=0;
        }
        printf("\n");
    }
}
