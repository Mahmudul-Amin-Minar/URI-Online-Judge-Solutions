#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k=0;
    char sen[600];
    gets(sen);
    k=strlen(sen);
    if(k<=140){
        printf("TWEET\n");
    }
    else{
        printf("MUTE\n");
    }
}
