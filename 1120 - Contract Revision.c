#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char Nu[1000], num[2],r_num[1000];
    long long int i,j,k,l,D,N,l1,move;
    while(1){
        scanf("%s %s",num,Nu);
        k=0;
        if(num[0]=='0' && Nu[0]=='0'){
            break;
        }
        else{
            l=strlen(Nu);
            for(j=0,i=0; j<l; j++){
                if(Nu[j]!=num[0]){
                    r_num[i]=Nu[j];
                    i++;
                }
            }
            r_num[i]='\0';
            l1=strlen(r_num);
            if(r_num[0]=='0'){
                for(i=0; r_num[i]; i++){
                    if(r_num[i]=='0'){
                        k++;
                    }
                    else{
                        break;
                    }
                }
                if(k==l1){
                    printf("0\n");
                    r_num[0]='\0';
                    continue;
                }
                if(k>0 && k!=l1){
                    move=l1-k;
                    for(i=0; i<move; i++){
                        r_num[i]=r_num[k];
                        k++;
                    }
                    r_num[i]='\0';
                }
            }
        }
        if(l1==0){
            printf("0\n");
            r_num[0]='\0';
            continue;
        }
        else{
            printf("%s\n",r_num);
            r_num[0]='\0';
            continue;
        }
    }
    return 0;
}
