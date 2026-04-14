#include <stdio.h>

int main()
{
    int mat[10][10];
    int m, n;

    printf("Enter the dimensions of the 2D array: ");
    scanf("%d %d",&m,&n);

    printf("Enter the %d elements to store in the array:\n",(m*n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The entered 2D array elements are:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
