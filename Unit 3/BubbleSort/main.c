#include <stdio.h>

int main()
{
    int nums[50];
    int n, temp;

    printf("Enter the number of elements in the array (<=50): ");
    scanf("%d",&n);

    if(n < 1 || n > 50){
        printf("Invalid array size, it must be between 1-50\n");
        return -1;
    }

    printf("Enter the %d array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }

    printf("Sorting the array elements in ascending order using bubble sort...\n");
    int num_swaps; // conditional variable to check for optimization of bubble sort
    // Bubble Sort starts here...
    for(int i=0;i<n-1;i++){ // we need n-1 passes to sort the entire array
        num_swaps = 0;
        for(int j=0;j<n-i-1;j++){
            if(nums[j] > nums[j+1]){ // if order is violated, swap the elements to fix it
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                num_swaps++;
            }
        }
        if(num_swaps == 0){ // if no swaps in a given pass through the array, it means the array is already sorted, so stop.
            break;
        }
    }

    printf("Sorting completed...\nThe sorted array is:\n");

    for(int i=0;i<n;i++){
        printf("%d ",nums[i]);
    }

    return 0;
}
