#include <stdio.h>

int main()
{
    unsigned int nrows;

    printf("Enter the number of rows: ");
    scanf("%u",&nrows);

    for(int i=1;i<=nrows;i++){ //outer loop for counting rows
        for(int j=1;j<=i;j++) { //inner loop for printing i stars on ith row
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
