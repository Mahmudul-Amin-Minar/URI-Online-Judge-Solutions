#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s)){
        int position = 0,i,k,m,n;
        n = s.length();
        for(m=0,k=0,i=0; i<n ; i++){
            if(s.at(i)=='_' && k==0){
                s.replace(i,1,"<i>");
                k=1;
            }
            if(s.at(i)=='_' && k==1){
                s.replace(i,1,"</i>");
                k=0;
            }
            if(s.at(i)=='*' && m==0){
                s.replace(i,1,"<b>");
                m=1;
            }
            if(s.at(i)=='*' && m==1){
                s.replace(i,1,"</b>");
                m=0;
            }
            n = s.length();
        }
        cout << s << endl;
    }
    return 0;
}
