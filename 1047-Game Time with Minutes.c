#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,h,m;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if(h2>h1 && m2>m1){
        m=m2-m1;
        h=h2-h1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h2>h1 && m2<m1){
        m2=m2+60;
        m=m2-m1;
        h1+=1;
        h=h2-h1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h2<h1 && m2>m1){
        m=m2-m1;
        h2+=24;
        h=h2-h1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h2<h1 && m2<m1){
        m2+=60;
        m=m2-m1;
        h1+=1;
        h2+=24;
        h=h2-h1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h2==h1 && m2==m1){
        h=24-h2+h1;
        m=m2-m1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h2==h1 && m2<m1){
        m2+=60;
        m=m2-m1;
        h=24-h2+h1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h2<h1 && m2==m1){
        m=m2-m1;
        h2+=24-h1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }

    return 0;
}
