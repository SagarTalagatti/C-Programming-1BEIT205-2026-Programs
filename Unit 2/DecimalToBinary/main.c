#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int decimal_num, digit, binary_num, rem, temp;

    printf("Enter a positive integer number: ");
    scanf("%u",&decimal_num);

    binary_num = 0;
    temp = decimal_num;
    int i = 0;
    while(decimal_num > 0){
        rem = decimal_num % 2;
        binary_num = rem * pow(10,i++) + binary_num;
        decimal_num = decimal_num / 2;
    }

    printf("%u converted to binary is: %u\n",temp, binary_num);

    return 0;
}
