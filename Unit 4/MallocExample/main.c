#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = (int *)malloc(sizeof(int));

    if(p != NULL){
        printf("Memory allocated successfully!\n");
        printf("Memory address = %p\n",p);
        printf("Value before initializing: %d\n",*p);
        printf("Enter a value to store in the memory: ");
        scanf("%d",p);
        printf("Value after initializing: %d\n",*p);
        free(p);
        p = NULL;
    }
    else{
        printf("Memory allocation failed!!!\n");
    }

    return 0;
}
