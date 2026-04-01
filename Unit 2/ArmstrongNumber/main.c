#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int num, result, num_digits, temp, digit;

    printf("Enter a positive integer number: ");
    scanf("%u",&num);

    temp = num;
    num_digits = 0;

    while(num > 0){ //calculate the order of the number
        num = num / 10;
        num_digits++;
    }

    num = temp;
    result = 0;

    while(num > 0){ //calculate the sum of all digits raised to the order
        digit = num % 10;
        result = pow(digit, num_digits) + result;
        num = num / 10;
    }

    if(result == temp){ //if result matches original number, then it is an AN
        printf("The number is an ARMSTRONG NUMBER!\n");
    }
    else{
        printf("The number is an NOT AN ARMSTRONG NUMBER!!!\n");
    }

    return 0;
}
