#include <stdio.h>

int main()
{
    unsigned int nrows;

    printf("Enter the number of rows: ");
    scanf("%u",&nrows);

    for(int i=1; i<=nrows; i++){ // to count number of rows
        for(int j=i; j<nrows; j++){ // to print whitespaces
            printf(" ");
        }
        for(int j=1; j<=i; j++){ // to print i stars on ith row
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
