#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,N,l,z,y,a;
    char sent[60],masg[60];
    scanf("%d",&N);
    for(i=0; i<=N; i++){
        gets(sent);
        if(i==0){
            continue;
        }
        l=strlen(sent);
        k=0;
        y=0;
        if(sent[0]>='a' && sent[0]<='z'){
            masg[k]=sent[0];
            k++;
        }
        for(a=k,j=0; j<l; j++){
            if(sent[j]==' ' && (sent[j+1]>='a' && sent[j+1]<='z')){
                masg[a]=sent[j+1];
                a++;
            }
        }
        masg[a]='\0';
        printf("%s\n",masg);
    }
}
