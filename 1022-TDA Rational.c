#include<stdio.h>
#include<math.h>
int main()
{
    int N,X,Y,nu,de,t,gcd,nu1,de1,i,N1,D1,N2,D2,sum,q,r;
    char c,s;
    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%d %c %d %c %d %c %d",&N1,&s,&D1,&c,&N2,&s,&D2);
        if(c=='+'){
             nu=N1*D2 + N2*D1;
             q=nu;
             de=D1*D2;
             r=de;
             sum=(N1*D2 + N2*D1)/(D1*D2);
             if(nu==0) gcd=de;
             else if(de==0) gcd=nu;
             else{
                while(de!=0){
                    t=de;
                    de=nu%de;
                    nu=t;
                }
                gcd=abs(nu);
            }
            nu1=q/gcd;
            de1=r/gcd;
            printf("%d/%d = %d/%d\n",q,r,nu1,de1);
        }
        if(c=='-'){
            nu=N1*D2 - N2*D1;
            de=D1*D2;
            q=nu;
             r=de;
             sum=(N1*D2 - N2*D1)/(D1*D2);
             if(nu==0) gcd=de;
             else if(de==0) gcd=nu;
             else{
                while(de!=0){
                    t=de;
                    de=nu%de;
                    nu=t;
                }
                gcd=abs(nu);
            }
            nu1=q/gcd;
            de1=r/gcd;
            printf("%d/%d = %d/%d\n",q,r,nu1,de1);
        }
        if(c=='*'){
            nu=N1*N2;
            de=D1*D2;
            q=nu;
             r=de;
             sum=nu/de;
             if(nu==0) gcd=de;
             else if(de==0) gcd=nu;
             else{
                while(de!=0){
                    t=de;
                    de=nu%de;
                    nu=t;
                }
                gcd=abs(nu);
            }
            nu1=q/gcd;
            de1=r/gcd;
            printf("%d/%d = %d/%d\n",q,r,nu1,de1);
        }
        if(c=='/'){
        nu=N1*D2;
            de=N2*D1;
            q=nu;
             r=de;
             sum=nu/de;
             if(nu==0) gcd=de;
             else if(de==0) gcd=nu;
             else{
                while(de!=0){
                    t=de;
                    de=nu%de;
                    nu=t;
                }
                gcd=abs(nu);
            }
            nu1=q/gcd;
            de1=r/gcd;
            printf("%d/%d = %d/%d\n",q,r,nu1,de1);
    }
    }

 return 0;
}
