#include <stdio.h>

int main()
{
    unsigned int nrows;

    printf("Enter the number of rows: ");
    scanf("%u",&nrows);

    for(int i=1;i<=nrows;i++){ // to keep track of rows
        for(int j=i;j<nrows;j++){ // to print whitespaces
            printf(" ");
        }
        for(int j=1;j<=i;j++){ // first half of the triangle
            printf("%d",j);
        }
        for(int j=i-1;j>0;j--){ // second half of the triangle
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
