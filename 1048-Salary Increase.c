#include<stdio.h>
int main()
{
    float a,n_salary,incr;
    scanf("%f",&a);
    if(a>=0 && a<=400.00){
       n_salary=a+a*.15;
       incr=n_salary-a;
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%",n_salary,incr);
    }
    else if(a>=400.01 && a<=800.00){
       n_salary=a+a*.12;
       incr=n_salary-a;
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%",n_salary,incr);
    }
    else if(a>=800.01 && a<=1200.00){
       n_salary=a+a*.10;
       incr=n_salary-a;
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%",n_salary,incr);
    }
    else if(a>=1200.01 && a<=2000.00){
       n_salary=a+a*.07;
       incr=n_salary-a;
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%",n_salary,incr);
    }
    else if(a>2000.00){
       n_salary=a+a*.04;
       incr=n_salary-a;
       printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%",n_salary,incr);
    }
    printf("\n");
    return 0;
}
