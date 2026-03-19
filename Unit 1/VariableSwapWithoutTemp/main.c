#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d",&n1,&n2);
    printf("Before swapping:\n");
    printf("n1 = %d \t n2 = %d\n",n1,n2);

    printf("Now swapping the values of the two variables using a temporary...\n");
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    printf("After swapping:\n");
    printf("n1 = %d \t n2 = %d\n",n1,n2);

    return 0;
}
