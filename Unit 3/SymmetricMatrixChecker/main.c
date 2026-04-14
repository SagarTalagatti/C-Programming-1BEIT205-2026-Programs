#include <stdio.h>

int main()
{
    int mat[10][10];
    int m,n;
    int symmetric = 1;

    printf("Enter the order of the matrix: ");
    scanf("%d %d",&m,&n);

    if(m!=n){
        printf("Symmetric property holds good only for square matrices... The dimensions entered do not form a square matrix...\n");
        return -1;
    }

    printf("Enter the %d matrix elements:\n",(m*n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<m-1;i++){
        /*
            i ends at m-2 because no need to check the last row, it will already be
            covered in the previous iterations
        */
        for(int j=i+1;j<n;j++){
            /*
                j starts at i+1 because just comparing the upper triangle part with
                the lower triangle is sufficient. No point in re-comparing the lower
                triangle with the upper triangle.
            */
            if(mat[i][j] != mat[j][i]){
                symmetric = 0;
                break;
            }
        }
        if(!symmetric){
            break;
        }
    }

    if(symmetric){
        printf("The matrix is symmetric...\n");
    }
    else{
        printf("The matrix is not symmetric...\n");
    }

    return 0;
}
