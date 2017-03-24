#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char name[600];
    gets(name);
    int l;
    l=strlen(name);
    if(l<=80){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
