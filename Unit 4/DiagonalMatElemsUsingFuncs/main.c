#include <stdio.h>

#define COLS 10

void printMinorDiagElems(int mat[][COLS], int n){
    printf("The minor diagonal elements of the matrix are:\n");
    for(int i=0; i<n; i++){
        printf("%d ", mat[i][n-1-i]);
    }

    return;
}

int main()
{
    int mat[7][COLS];
    int n;

    printf("Enter the order of the square matrix: ");
    scanf("%d",&n);

    printf("Enter the %d elements of the matrix:\n",n*n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&mat[i][j]);
        }
    }

    printMinorDiagElems(mat,n);

    return 0;
}
