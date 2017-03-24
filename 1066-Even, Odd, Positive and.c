#include<stdio.h>
int main()
{
    int a,n,e_num=0,o_num=0,p_num=0,n_num=0;
    for(n=0; n<5; n++){
        scanf("%d",&a);
        if(a%2==0){
            e_num+=1;
        }
        if(a%2!=0){
            o_num+=1;
        }
        if(a>0){
            p_num+=1;
        }
        if(a<0){
            n_num+=1;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",e_num,o_num,p_num,n_num);
}
