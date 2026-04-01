#include <stdio.h>

int main()
{
    unsigned long long int fact;
    unsigned int n;

    printf("Enter the value of n:");
    scanf("%u",&n);

    if(n==0){
        fact = 1;
    }
    else{
        fact = 1;
        for(int i=1;i<=n;i++){
            fact = fact * i;
        }
    }

    printf("Factorial of %u = %llu\n",n,fact);

    return 0;
}
