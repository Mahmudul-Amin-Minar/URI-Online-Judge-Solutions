#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,vowels_count;
    string vowels;
    while(cin >> vowels){
        string sen;
        getchar();
        getline(cin,sen);
        vowels_count = 0;
        for(i=0; i<sen.size(); i++){
            for(j=0; j<vowels.size(); j++){
                if(sen.at(i)==vowels.at(j)){
                    vowels_count++;
                }
            }
        }
        cout << vowels_count << endl;
    }
}
