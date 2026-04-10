#include <stdio.h>

int main()
{
    int arr[50];
    int n, key, found, index;

    printf("Enter the number of elements in the array (<=50): ");
    scanf("%d",&n);

    if(n < 1 || n > 50){
        printf("Invalid array size... It must be between 1-50\n");
        return -1;
    }

    printf("Enter the %d array elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the key element to look for in the array: ");
    scanf("%d",&key);

    found = 0;

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            found = 1;
            index = i;
            break;
        }
    }

    if(found){
        printf("Key element %d found at index %d\n",key,index);
    }
    else{
        printf("Key element %d not found in the array!!!\n",key);
    }

    return 0;
}
