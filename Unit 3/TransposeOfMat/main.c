#include <stdio.h>

int main()
{
    int mat[10][10], trans[10][10];
    int m,n;

    printf("Enter the order of the matrix: ");
    scanf("%d %d",&m,&n);

    printf("Enter the %d elements of the matrix:\n",(m*n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            trans[j][i] = mat[i][j];
        }
    }

    printf("The transpose of the entered matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
