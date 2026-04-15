#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10]={0};
    int m,n,p,q;

    printf("Enter the order of matrix A: ");
    scanf("%d %d",&m,&n);

    printf("Enter the order of matrix B: ");
    scanf("%d %d",&p,&q);

    if(n!=p){
        printf("The matrices are not compatible for multiplication...\n");
        return -1;
    }

    printf("Enter the %d elements of matA:\n",(m*n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter the %d elements of matB:\n",(p*q));
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&B[i][j]);
        }
    }

    for(int i=0;i<m;i++){ // keep track of rows
        for(int j=0;j<q;j++){ // keep track of columns
            for(int k=0;k<n;k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    printf("The product of matA and matB:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
