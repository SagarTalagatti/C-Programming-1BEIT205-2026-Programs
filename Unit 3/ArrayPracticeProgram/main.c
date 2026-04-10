#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int n;

    printf("Enter the number of elements to store in the array (<=100): ");
    scanf("%d",&n);

    if(n < 1 || n > 100){
        printf("Invalid array size, it must be between 1-100!!!\n");
        return -1;
    }

    printf("Enter the %d array elements, separated by space: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("The array elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
