#include <stdio.h>
#include <stdlib.h>

int main()
{
    int divisor, dividend;
    int quotient, remainder;

    printf("Enter the values of dividend and divisor: ");
    scanf("%d %d",&dividend,&divisor);

    quotient = dividend / divisor;
    remainder = dividend - divisor * quotient;

    printf("Remainder of dividing %d by %d = %d\n",dividend, divisor, remainder);

    return 0;
}
