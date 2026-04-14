#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], sum[10][10], diff[10][10];
    int m, n, p, q;

    printf("Enter the dimensions of matrix A: ");
    scanf("%d %d",&m,&n);

    printf("Enter the dimensions of matrix B: ");
    scanf("%d %d",&p,&q);

    if(m != p || n != q){
        printf("Dimensions of MatA and MatB are incompatible. Operations not possible\n");
    }
    else{
        printf("Enter the %d elements of MatA:\n",(m*n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&A[i][j]);
            }
        }

        printf("Enter the %d elements of MatB:\n",(p*q));
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                scanf("%d",&B[i][j]);
            }
        }

        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                sum[i][j] = A[i][j] + B[i][j];
            }
        }

        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                diff[i][j] = A[i][j] - B[i][j];
            }
        }

        printf("The sum of MatA and MatB is:\n");
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                printf("%d ",sum[i][j]);
            }
            printf("\n");
        }

        printf("The difference of MatA and MatB is:\n");
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                printf("%d ",diff[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
