#include<stdio.h>
#include<string.h>
int main()
{
    int N,i,j,l1,l2,k;
    char ch1[60],ch2[60],tot[120];
    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%s%s",ch1,ch2);
        l1=strlen(ch1),l2=strlen(ch2);
        if(l1<=l2){
            for(k=0,j=0; j<l1; j++){
                tot[k]=ch1[j];
                k++;
                tot[k]=ch2[j];
                k++;
            }
            tot[k]='\0';
            strcat(tot,ch2+l1);
            printf("%s\n",tot);
        }
        if(l1>l2){
            for(k=0,j=0; j<l2; j++){
                tot[k]=ch1[j];
                k++;
                tot[k]=ch2[j];
                k++;
            }
            tot[k]='\0';
            strcat(tot,ch1+l2);
            printf("%s\n",tot);
        }
    }
    return 0;
}
