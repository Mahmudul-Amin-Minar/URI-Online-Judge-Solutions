#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char sen[60],c;
    while(gets(sen)){
        k=strlen(sen);
        for(i=0; i<k; i++){
            if(sen[i]>=97 && sen[i]<=122){
                c=sen[i]+13;
                if(c>'z' || c<'a'){
                    j=122-sen[i];
                    c=97+(12-j);
                }
                sen[i]=c;
            }
            if(sen[i]>=65 && sen[i]<=90){
                c=sen[i]+13;
                if(c>90){
                    j=90-sen[i];
                    c=65+(12-j);
                }
                sen[i]=c;
            }
        }
        printf("%s\n",sen);
    }
    return 0;
}
