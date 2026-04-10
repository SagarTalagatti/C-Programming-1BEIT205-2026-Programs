#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 70, 99, 150, 200, 300, 450, 1000, 2345, 3456, 7892};
    int key, found, high, low, mid, index;

    printf("The array elements are:\n");
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter the key value to search in the array: ");
    scanf("%d",&key);

    found = 0;
    high = sizeof(arr) / sizeof(int) - 1;
    low = 0;

    while(low<=high){
        mid = (low + high) / 2;
        //printf("Mid = %d\n", mid);
        if(arr[mid] == key){
            found = 1;
            index = mid;
            break;
        }
        if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(found){
        printf("Key element %d found at index %d in the array!!!\n",key,index);
    }
    else{
        printf("Key element %d NOT found in the array!!!\n",key);
    }

    return 0;
}
