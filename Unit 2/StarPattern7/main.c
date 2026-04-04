#include <stdio.h>

int main()
{
    unsigned int nrows;

    printf("Enter the number of rows in the upper half of the diamond: ");
    scanf("%u",&nrows);

    for(int i=1;i<=nrows;i++){ // upper half of the diamond
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

    for(int i=nrows-1;i>0;i--){ // lower half of the diamond
        for(int j=i;j<nrows;j++){
            printf(" ");
        }
        for(int j=i;j>0;j--){
            printf("*");
        }
        for(int j=i-1;j>0;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
