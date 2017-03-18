#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001],b[1001],c[1001],e[1001];
    int N,i,j,k,m,d,car,h,q,w,z=0;
    scanf("%d",&N);
    
    for(z=0; z<=N; z++){
        gets(a);
        if(z==0){
            continue;
        }
        k=strlen(a);
        for(j=0,i=0; i<k; i++,j++){
            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
                b[j]=a[i]+3;
            }
            else{
                b[j]=a[i];
            }
        }
        b[j]='\0';
        
        for(d=0,m=k-1; m>=0; m--,d++){
            c[d]=b[m];
        }
        c[d]='\0';
        
        for(q=0,h=0; h<=k; h++,q++){
            e[h]=c[q];
        }
        e[h]='\0';
        
        if(k%2==0){
           for(h=k/2; h<k; h++){
            e[h]--;
            }
        }
        else{
            for(h=(k/2); h<k; h++){
                e[h]--;
            }
        }
        e[h]='\0';
        printf("%s\n",e);
    }
    return 0;
}
