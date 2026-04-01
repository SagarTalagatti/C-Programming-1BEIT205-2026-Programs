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
        for(unsigned int i=1;i<n;i++){
            temp = t2;
            t2 = t1 + t2;
            t1 = temp;
        }
        printf("The %u th term of Fibo series is: %u",n,t1);
    }

    return 0;
}
