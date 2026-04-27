#include <stdio.h>

int main()
{
    int mat[10][10];
    int n, temp;

    printf("Enter the order of the square matrix: ");
    scanf("%d",&n);

    printf("Enter the %d elements of the matrix:\n",(n*n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        temp = mat[i][i]; // store major diag element in temp
        mat[i][i] = mat[i][n-1-i]; // store minor diag element in major diag counterpart
        mat[i][n-i-1] = temp; // store major diag element in minor diag counterpart
    }

    printf("The matrix after swapping the elements of major and minor diagonal:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
