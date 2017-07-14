#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,k,l;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n;
        int sum = 0;
        for(j=0; j<n; j++){
            string str;
            cin >> str;
            int l = str.size();
            for(int k=0; k<l; k++){
                sum += str.at(k) - 65 + j + k;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
