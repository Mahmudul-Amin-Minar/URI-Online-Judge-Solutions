#include<stdio.h>
int main()
{
    int sum=0;
    char crow[10];
    while(gets(crow)){
        if(strcmp("caw caw",crow)!=0){
            if(strcmp("--*",crow)==0){
                sum+=1;
            }
            if(strcmp("-*-",crow)==0){
                sum+=2;
            }
            if(strcmp("*--",crow)==0){
                sum+=4;
            }
            if(strcmp("---",crow)==0){
                sum+=0;
            }
            if(strcmp("***",crow)==0){
                sum+=7;
            }
            if(strcmp("**-",crow)==0){
                sum+=6;
            }
            if(strcmp("-**",crow)==0){
                sum+=3;
            }
            if(strcmp("*-*",crow)==0){
                sum+=5;
            }
        }
        if(strcmp("caw caw",crow)==0){
            printf("%d\n",sum);
            sum=0;
        }
    }
}
