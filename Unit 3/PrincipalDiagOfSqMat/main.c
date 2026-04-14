#include <stdio.h>

int main()
{
    int mat[10][10];
    int n;

    printf("Enter the order of the square matrix: ");
    scanf("%d",&n);

    printf("Enter the %d elements of the matrix:\n",(n*n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    int sum = 0;
    printf("The elements of the principal diagonal are:\n");
    for(int i=0;i<n;i++){
        sum += mat[i][i];
        printf("%d ",mat[i][i]);
    }

    printf("\nThe sum of the elements of the principal diagonal = %d\n",sum);

    return 0;
}
