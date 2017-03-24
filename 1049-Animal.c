#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20],c[20];
    char a1[]="vertebrado",b1[]="ave",c1[]="carnivoro",d1[]="onivoro",e1[]="mamifero",f1[]="herbivoro",g1[]="invertebrado",h1[]="inseto",i1[]="hematofago",j1[]="anelideo",k1[]="onivoro";
    gets(a);
    gets(b);
    gets(c);
    if(0==strcmp(a,a1) && 0==strcmp(b,b1) && 0==strcmp(c,c1)){
        printf("aguia");
    }
    else if(0==strcmp(a,a1) && 0==strcmp(b,b1) && 0==strcmp(c,k1)){
        printf("pomba");
    }
    else if(0==strcmp(a,a1) && 0==strcmp(b,e1) && 0==strcmp(c,d1)){
        printf("homem");
    }
    else if(0==strcmp(a,a1) && 0==strcmp(b,e1) && 0==strcmp(c,f1)){
        printf("vaca");
    }
    else if(0==strcmp(a,g1) && 0==strcmp(b,h1) && 0==strcmp(c,i1)){
        printf("pulga");
    }
    else if(0==strcmp(a,g1) && 0==strcmp(b,h1) && 0==strcmp(c,f1)){
        printf("lagarta");
    }
    else if(0==strcmp(a,g1) && 0==strcmp(b,j1) && 0==strcmp(c,i1)){
        printf("sanguessuga");
    }
    else if(0==strcmp(a,g1) && 0==strcmp(b,j1) && 0==strcmp(c,k1)){
        printf("minhoca");
    }
    printf("\n");
}
