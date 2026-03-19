#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, max;

    printf("Enter the two numbers: ");
    scanf("%f %f",&n1,&n2);

    max = (n1 > n2) ? n1 : n2;

    printf("The highest of the two numbers is: %f\n",max);

    return 0;
}
