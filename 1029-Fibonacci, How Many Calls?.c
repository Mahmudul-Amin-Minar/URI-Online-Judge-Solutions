#include <stdio.h>
int cont;

int fibonacci(int n){
    cont++;
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int N, X,i;
    scanf("%d",&N);
    for( i = 0; i < N; i++){
            scanf("%d",&X);
            cont = 0;
            printf("fib(%d) = %d calls = %d\n",X,cont-1,fibonacci(X));
    }
    return 0;
}
