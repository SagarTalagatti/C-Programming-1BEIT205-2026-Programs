#include <stdio.h>

#define COLS 10

void addMatrices(int A[][COLS], int B[][COLS], int C[][COLS], int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main()
{
    int m1[10][COLS], m2[10][COLS], m3[10][COLS];
    int rows, columns;

    printf("Enter the dimensions of the two matrices: ");
    scanf("%d %d",&rows,&columns);

    printf("Enter the %d elements of matrix A:\n",rows*columns);
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            scanf("%d",&m1[i][j]);
        }
    }

    printf("Enter the %d elements of matrix B:\n",rows*columns);
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            scanf("%d",&m2[i][j]);
        }
    }

    addMatrices(m1, m2, m3, rows, columns);
    printf("After addition, resultant matrix:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d ",m3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
