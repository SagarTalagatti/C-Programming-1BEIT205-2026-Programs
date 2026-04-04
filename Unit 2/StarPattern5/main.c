#include <stdio.h>

int main()
{
    unsigned int nrows;

    printf("Enter the number of rows: ");
    scanf("%u",&nrows);

    for(int i=1;i<=nrows;i++){ // to keep track of rows
        for(int j=i;j<nrows;j++){ // to print spaces
            printf(" ");
        }
        for(int j=1;j<=i;j++){ // to print first half of stars
            printf("*");
        }
        for(int j=2;j<=i;j++){ // to print the remaining half
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
