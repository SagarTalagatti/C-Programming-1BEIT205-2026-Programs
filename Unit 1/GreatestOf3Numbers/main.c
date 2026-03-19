#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, high;

    printf("Enter three numbers: ");
    scanf("%f %f %f",&n1,&n2,&n3);

    high = (n1 > n2 && n1 > n3) ? n1 : ((n2 > n1 && n2 > n3) ? n2 : n3);

    printf("The highest of the three numbers = %f\n",high);

    return 0;
}
