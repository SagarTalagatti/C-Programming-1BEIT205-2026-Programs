#include <stdio.h>

int main()
{
    int mat[10][10];
    int n;

    printf("Enter the order of the square matrix: ");
    scanf("%d",&n);

    printf("Enter the %d matrix elements:\n",(n*n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    int is_diag = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && mat[i][j]!=0){
                is_diag = 0;
                break;
            }
        }
        if(!is_diag){
            break;
        }
    }

    if(!is_diag){
        printf("The matrix is not a diagonal matrix.\n");
        printf("The matrix is also not an identity matrix.\n");
    }
    else{ // at this point, we are sure that the matrix is a diagonal matrix
        int is_identity = 1;
        for(int i=0;i<n;i++){
            if(mat[i][i]!=1){
                is_identity = 0;
                break;
            }
        }

        if(is_identity){
            printf("The matrix is both a diagonal matrix and an identity matrix\n");
        }
        else{ // at this stage, if it is not an identity matrix, then it must be just a diagonal matrix
            printf("The matrix is just a diagonal matrix\n");
        }
    }

    return 0;
}
