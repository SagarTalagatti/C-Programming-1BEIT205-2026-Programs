#include <stdio.h>

int largestElementOfArray(int arr[], int n){
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int nums[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    printf("Enter the %d elements of the array:\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&nums[i]);
    }

    int largestElement = largestElementOfArray(nums, n);

    printf("The largest element in the array is: %d\n",largestElement);

    return 0;
}
