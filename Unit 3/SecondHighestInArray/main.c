#include <stdio.h>
#include <limits.h>

#define MAX_SIZE 50

int main()
{
    int arr[MAX_SIZE];
    int n;
    int highest = INT_MIN;
    int highest_2nd = INT_MIN;

    printf("Enter the number of elements in the array(1-50): ");
    scanf("%d",&n);

    if(n < 1 || n > MAX_SIZE){
        printf("Invalid size entered!!! It must be between 1-50...\n");
        return -1;
    }

    printf("Enter the %d array elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i] > highest){
            highest_2nd = highest;
            highest = arr[i];
        }
        else if(arr[i] > highest_2nd && arr[i] != highest){
            highest_2nd = arr[i];
        }
    }

    if(highest_2nd != INT_MIN){
        printf("The 2nd highest element in the array is: %d\n",highest_2nd);
    }
    else{
        printf("The 2nd highest element in the array DOES NOT EXIST!!!\n");
    }

    return 0;
}
