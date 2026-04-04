#include <stdio.h>

int main()
{
    unsigned int nrows;

    printf("Enter the number of rows: ");
    scanf("%u",&nrows);

    for(int i=nrows;i>0;i--){ // to keep track of rows
        for(int j=i;j<nrows;j++){ // to print whitespaces
            printf(" ");
        }
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
