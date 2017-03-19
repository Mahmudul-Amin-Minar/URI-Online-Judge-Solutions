#include<stdio.h>
#include<math.h>
int main()
{
    int R1,R2,X1,Y1,X2,Y2;
    double d,g;
    while(scanf("%d%d%d%d%d%d",&R1,&X1,&Y1,&R2,&X2,&Y2)!=EOF){
        d=sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1)));
        g=R1-R2;

        if(d>g){
            printf("MORTO\n");
        }
        if(d<=g){
            printf("RICO\n");
        }

    }
    return 0;
}
