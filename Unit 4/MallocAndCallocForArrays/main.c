#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, ch;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    printf("Choose an option for allocating dynamic memory:\n");
    printf("1. malloc()\n");
    printf("2. calloc()\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);

    if(ch == 1){
        arr = (int *)malloc(n * sizeof(int));
        if(arr!=NULL){
            printf("Memory allocation using malloc was SUCCESSFUL!\n");
            printf("Values before initializing:\n");
            for(int i=0; i<n; i++){
                printf("%d ",arr[i]);
            }
            printf("\n");
            for(int i=0; i<n; i++){
                arr[i] = i + 1;
            }
            printf("Values after initializing:\n");
            for(int i=0; i<n; i++){
                printf("%d ",arr[i]);
            }
            printf("\n");
            free(arr);
            arr = NULL;
        }
        else{
            printf("Memory allocation using malloc FAILED!\n");
        }
    }
    else if(ch == 2){
        arr = (int *)calloc(n,sizeof(int));
        if(arr!=NULL){
            printf("Memory allocation using calloc was SUCCESSFUL!\n");
            printf("Values before initializing:\n");
            for(int i=0; i<n; i++){
                printf("%d ",arr[i]);
            }
            printf("\n");
            for(int i=0; i<n; i++){
                arr[i] = i + 1;
            }
            printf("Values after initializing:\n");
            for(int i=0; i<n; i++){
                printf("%d ",arr[i]);
            }
            printf("\n");
            free(arr);
            arr = NULL;
        }
        else{
            printf("Memory allocation using calloc FAILED!\n");
        }
    }
    else{
        printf("Invalid choice...\n");
    }

    return 0;
}
