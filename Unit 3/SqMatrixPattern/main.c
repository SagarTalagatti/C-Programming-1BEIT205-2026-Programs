#include <stdio.h>

int main()
{
    int n;
    int mat[10][10];

    printf("Enter the order of the square matrix: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){ // set minor diagonal to 0
        mat[i][n-1-i] = 0;
    }

    for(int i=0;i<n-1;i++){ // set upper left triangle to +1
        for(int j=0;j<n-1-i;j++){
            mat[i][j] = +1;
        }
    }

    for(int i=n-1;i>0;i--){ // set lower right triangle to -1
        for(int j=n-1;j>=n-i;j--){
            mat[i][j] = -1;
        }
    }

    printf("The matrix after processing:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
