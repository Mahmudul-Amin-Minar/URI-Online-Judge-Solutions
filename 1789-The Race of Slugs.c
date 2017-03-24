#include <stdio.h>

int main()
{


    int V,i,cont1=0,cont2=0,cont3=0;
    int  L;

    while ((scanf("%d",&L))!=EOF){
        for (i=0; i<L; i++){
            scanf("%d",&V);
            if(V<10)
                cont1++;
            if(V>=10 && V<20)
                cont2++;
            if(V>=20)
                cont3++;
        }
        if(cont3!=0)
            printf("3\n");
        else if (cont2!=0)
            printf("2\n");
        else
            printf("1\n");
        cont1=0;
        cont2=0;
        cont3=0;
    }
return 0;
}
