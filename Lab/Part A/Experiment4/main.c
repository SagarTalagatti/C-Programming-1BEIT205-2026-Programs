#include <stdio.h>

int main()
{
    int nrows;

    printf("Number pyramid pattern printing...\n");
    printf("Enter the number of rows (n): ");
    scanf("%d",&nrows);

    int value = 1;
    for(int i=1; i<=nrows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%-2d ",value++);
        }
        printf("\n");
    }

    return 0;
}
