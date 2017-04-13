#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k=0,l;
    char s[110];
    scanf("%s",s);
    for(i=0; s[i]; i++){
        if(s[i]=='1'){
            k++;
        }
    }
    if(k%2==0){
        cout << s << 0 <<endl;
    }
    else{
        cout << s << 1 << endl;
    }
}
