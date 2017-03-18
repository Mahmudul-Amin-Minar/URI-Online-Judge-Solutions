#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N,Q,i,j,k=0,l=1,temp;
    while(scanf("%d%d",&N,&Q)){
        if(N==0 && Q==0){
            return 0;
        }
        else{
            int marbel[N],query;
            for(i=0; i<N; i++){
                scanf("%d",&marbel[i]);
            }
            sort(marbel,marbel+N);
            for(i=0; i<Q; i++){
                scanf("%d",&query);
                if(i==0){
                    printf("CASE# %d:\n",l);
                }
                k=0;
                for(j=0; j<N; j++){
                    if(marbel[j]==query){
                        printf("%d found at %d\n",query,j+1);
                        break;
                    }
                    else{
                        k++;
                    }
                }
                if(k==N){
                    printf("%d not found\n",query);
                }
            }
        }
        l++;
    }
    return 0;
}
