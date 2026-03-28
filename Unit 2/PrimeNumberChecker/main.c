#include <stdio.h>
#include <math.h>
int main()
{
    int num,is_prime=1;

    printf("Enter a positive integer number: ");
    scanf("%d",&num);

    if(num <=0){
        printf("Invalid input!!!\n");
    }
    else{
        if(num == 1){
            printf("1 is neither a prime nor a composite number!!!\n");
        }
        else if(num == 2){
            printf("2 is the only even prime number!!!\n");
        }
        else{
            int sqrt_num = sqrt(num);
            for(int i=2;i<=sqrt_num;i++){
                if(num % i == 0){ // factor found!!!
                    printf("It is NOT a Prime number!!!\n");
                    is_prime = 0;
                    break;
                }
            }
            if(is_prime){
                printf("It is a Prime number!!!\n");
            }
        }
    }

    return 0;
}
