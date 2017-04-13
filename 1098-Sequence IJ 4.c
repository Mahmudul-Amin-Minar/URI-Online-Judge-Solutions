#include<stdio.h>
int main()
{
    float a=0,b=1,d=1.2,e=4.2,i,j;
    for(i=a; i<1; i++){
        for(j=b; j<=3 ;j++){
            printf("I=%.0f J=%.0f\n",i,j);
        }
    }
    a+=.2;
    for(i=a; i<=1.0; i+=.2){
        for(j=d; j<e; j++){
            if(i==1){
                printf("I=%.0f J=%.0f\n",i,j);
            }
            else{
                printf("I=%.1f J=%.1f\n",i,j);
            }
        }
        d+=.2;
    }
    a+=1;
    e+=1;
    for(i=a; i<=2; i+=.2){
        for(j=d; j<e; j++){
            printf("I=%.1f J=%.1f\n",i,j);
        }
        d+=.2;
    }
    float x=2;
    for(i=x; i<=2; i++){
        for(j=d; j<e; j++){
            printf("I=%.0f J=%.0f\n",i,j);
        }
    }
}
