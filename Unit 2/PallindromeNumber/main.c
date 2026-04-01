#include <stdio.h>

int main()
{
    unsigned int num, reverse_num, digit, temp;

    printf("Enter a positive integer number: ");
    scanf("%u",&num);

    reverse_num = 0;

    temp = num;
    while(num > 0){
        digit = num % 10;
        reverse_num = reverse_num * 10 + digit;
        num = num / 10;
    }

    if(temp == reverse_num){
        printf("The entered number is a pallindrome\n");
    }
    else{
        printf("The entered number is not a pallindrome!\n");
    }

    return 0;
}
