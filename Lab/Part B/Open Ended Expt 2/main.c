#include <stdio.h>
#include <stdlib.h>

unsigned long long int fact(unsigned long long int n){
    if(n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    unsigned long long int n_fact, r_fact, nr_fact, res;
    for(unsigned int n = 1; n <= 10; n++){
        n_fact = fact(n);
        printf("The nCr table for n = %u\n",n);
        for(unsigned int r = 0; r <= n; r++){
            r_fact = fact(r);
            nr_fact = fact(n - r);
            res = n_fact / (r_fact * nr_fact);
            printf("%u C %u = %llu\n",n,r,res);
        }
    }

    return 0;
}
