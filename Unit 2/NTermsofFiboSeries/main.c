#include <stdio.h>

int main()
{
    unsigned int n;
    unsigned int t1=0, t2=1, temp;

    printf("Enter the value of n:");
    scanf("%u",&n);

    if(n==0){
        printf("Invalid input!!!\n");
    }
    else{
        printf("The first %u terms of the Fibo series are:\n",n);
        for(unsigned int i=1;i<=n;i++){
            printf("%u ",t1);
            temp = t2;
            t2 = t1 + t2;
            t1 = temp;
        }
    }

    return 0;
}
