#include<bits/stdc++.h>
using namespace std;

int main()
{
    float xf,yf,xi,yi,vi,r1,r2,i,d,t;
    while(scanf("%f%f%f%f%f%f%f",&xf,&yf,&xi,&yi,&vi,&r1,&r2) != EOF){
        d = (xf - xi)*(xf - xi) + (yf - yi)*(yf - yi);
        d = sqrt(d);
        t = vi*1.50;
        d += t;
        if(r1+r2>=d){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }
    return 0;
}
