#include <stdio.h>
#include <string.h>
int main()
{
    int A,j,m=0,i,l,k,d,N;
    char C[10000];
    scanf("%d",&N);
    for(k=0; k<=N; k++){
        gets(C);
        if(k==0){
            continue;
        }
        A=0;
        l=strlen(C);
        for(i=0; i<=l; i++){
            if(C[i]=='<'){
                for(j=i; j<l; j++){
                    if(C[j]=='>'){
                        A++;
                        C[j]='0';
                        break;
                    }
                }
            }
        }
        printf("%d\n",A);
    }
}
