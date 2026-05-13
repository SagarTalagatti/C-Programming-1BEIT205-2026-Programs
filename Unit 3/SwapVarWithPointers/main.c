#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);

    printf("Values of a and b before swapping:\n");
    printf("a = %d, b = %d\n",a,b);

    int *p, *q;
    p = &a;
    q = &b;

    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;

    printf("Values of a and b after swapping:\n");
    printf("a = %d, b = %d\n",a,b);

    return 0;
}
