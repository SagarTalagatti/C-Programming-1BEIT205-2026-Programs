#include <stdio.h>
#include <stdlib.h>

int main(){
    int initial_size = 10, final_size;
    int *arr;

    arr = (int *)malloc(initial_size * sizeof(int));
    if(arr != NULL){
        printf("Memory allocation successful!\n");
        for(int i=0; i<initial_size; i++){
            arr[i] = i + 1;
        }
        printf("Initial size: %d\n",initial_size);
        printf("Initial memory address: %p\n",arr);
        printf("Initial values:\n");
        for(int i=0; i<initial_size; i++){
            printf("%d ",arr[i]);
        }
        printf("\nEnter final size to resize the array: ");
        scanf("%d",&final_size);

        arr = realloc(arr, final_size * sizeof(int));
        if(arr == NULL){
            printf("Reallocation failed...\n");
        }
        else{
            printf("Reallocation successful...\n");
            printf("New size: %d\n",final_size);
            printf("New memory address after realloc: %p\n",arr);
            printf("Final values:\n");
            for(int i=0; i<final_size; i++){
                printf("%d ",arr[i]);
            }
            printf("\n");
        }
        free(arr);
        arr = NULL;
    }
    else{
        printf("Memory allocation failed!\n");
    }

    return 0;
}
