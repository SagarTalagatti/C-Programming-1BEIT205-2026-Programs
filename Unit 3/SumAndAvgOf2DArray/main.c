#include <stdio.h>

int main()
{
    float mat[10][10];
    int m,n;

    printf("Enter the dimensions of the 2D array: ");
    scanf("%d %d",&m,&n);

    printf("Enter the %d array elements:\n",(m*n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%f",&mat[i][j]);
        }
    }

    float sum, avg;

    sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum += mat[i][j];
        }
    }

    avg = sum / (m * n);

    printf("The sum of all elements = %f\n",sum);
    printf("The average of all elements = %f\n",avg);

    return 0;
}
