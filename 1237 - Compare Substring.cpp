#include<iostream>
#include<cstdio>
#include<ctype.h>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k,l1,l2,sum,m,result=0;

    char strin1[60],strin2[60];
    while(gets(strin1)){
        gets(strin2);
        l1 = strlen(strin1),l2 = strlen(strin2);
        if(l2>=l1){
            for(i=0; strin2[i]; i++){
                for(j=0; strin1[j]; j++){
                    sum=0;
                    if(strin2[i] == strin1[j]){
                        for(k=i, m=j; strin1[m];){
                            if(strin2[k] == strin1[m]){
                                sum++;
                                k++,m++;
                                if(sum>=result){
                                    result = sum;
                                }
                            }
                            else{
                                break;
                            }
                        }
                    }
                }
            }
            result = max(sum,result);
            cout << result << endl;
            result = 0;
        }
        else{
            for(i=0; strin1[i]; i++){
                for(j=0; strin2[j]; j++){
                    sum=0;
                    if(strin1[i] == strin2[j]){
                        for(k=i, m=j; strin2[m]; k++, m++){
                            if(strin1[k] == strin2[m]){
                                sum++;
                                if(sum>=result){
                                    result = sum;
                                }
                            }
                            else{
                                break;
                            }
                        }
                    }
                }
            }
            result = max(sum,result);
            cout << result << endl;
            result = 0;
        }
    }
    return 0;
}
