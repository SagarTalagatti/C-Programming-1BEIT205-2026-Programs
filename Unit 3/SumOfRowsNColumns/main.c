#include <stdio.h>

int main()
{
    int mat[10][10];
    int m,n;

    printf("Enter the order of the matrix: ");
    scanf("%d %d",&m,&n);

    printf("Enter the %d matrix elements:\n",(m*n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    int row_sum, column_sum;

    for(int i=0;i<m;i++){
        row_sum=0;
        for(int j=0;j<n;j++){
            row_sum += mat[i][j];
        }
        printf("Sum of row %d = %d\n",(i+1),row_sum);
    }

    for(int j=0;j<n;j++){
        column_sum = 0;
        for(int i=0;i<m;i++){
            column_sum += mat[i][j];
        }
        printf("Sum of column %d = %d\n",(j+1),column_sum);
    }

    return 0;
}
