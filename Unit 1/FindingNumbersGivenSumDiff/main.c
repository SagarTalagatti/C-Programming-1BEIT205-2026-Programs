#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum, diff, a, b;

    printf("Enter the sum and difference of the two numbers:");
    scanf("%f %f",&sum,&diff);

    a = (sum + diff) / 2;
    b = sum - a;

    printf("The two numbers are:\n");
    printf("a = %f, b = %f\n",a,b);

    return 0;
}
