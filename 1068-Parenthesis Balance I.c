#include <stdio.h>
#include <string.h>
int main()
{
    int A=0,B=0,j,m=0,i,l,k;
    char C[1000];
    while(gets(C)!=NULL){

            l=strlen(C);
            for(j=0; j<=l; j++){
                if(C[j]=='('){
                    A+=1;
                }
                if(C[j]==')'){
                    A-=1;
                    if(A<0){
                      m++;
                    }
                }
                else{
                    continue;
                }
            }
            if(A==0 && m==0){
                printf("correct\n");
            }
            else{
                printf("incorrect\n");
            }
        A=0;
        m=0;
    }
}
