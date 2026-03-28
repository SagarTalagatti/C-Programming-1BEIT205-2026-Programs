#include <stdio.h>

int main()
{
    float num;

    printf("Enter a number: ");
    scanf("%f",&num);

    if(num == 0)
        printf("Number is ZERO!");
    else if(num > 0)
        printf("Number is POSITIVE!!");
    else
        printf("Number is NEGATIVE!!!");

    printf("\n");

    return 0;
}
