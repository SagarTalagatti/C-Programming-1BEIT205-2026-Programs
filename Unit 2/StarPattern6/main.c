#include <stdio.h>

int main()
{
    unsigned int nrows;

    printf("Enter the number of rows: ");
    scanf("%u",&nrows);

    for(int i=nrows;i>0;i--){ // to keep track of rows
        for(int j=nrows;j>i;j--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int j=2;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
