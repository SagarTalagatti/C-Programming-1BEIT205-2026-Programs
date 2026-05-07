#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int *ptr_x = &x, *ptr_y;
    ptr_y = &y;

    printf("Enter the values of x & y: ");
    scanf("%d %d",&x,ptr_y);

    int sum = *ptr_x + *ptr_y;
    int diff = *ptr_x - *ptr_y;
    int prod = *ptr_x * *ptr_y;
    int div = *ptr_x / *ptr_y;
    int mod = *ptr_x % *ptr_y;

    printf("Sum = %d\n",sum);
    printf("Diff = %d\n",diff);
    printf("Prod = %d\n",prod);
    printf("Div = %d\n",div);
    printf("Mod = %d\n",mod);

    return 0;
}
