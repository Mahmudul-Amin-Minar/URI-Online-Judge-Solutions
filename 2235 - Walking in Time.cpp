#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b || a == c || b == c || a + b == c || b + c == a || a + c == b){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
    return 0;
}
