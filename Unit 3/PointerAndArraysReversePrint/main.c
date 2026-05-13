#include <stdio.h>

int main()
{
    int arr[100];
    int *p, n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    p = arr;
    printf("Enter the %d array elements: ",n);
    for(int i=0; i<n; i++){
        scanf("%d", p);
        p++;
        //scanf("%d", p+i);
    }

    printf("Printing the array elements in reverse order:\n");
    for(int i=0; i<n; i++){
        p--;
        printf("%d ",*p);
        //printf("%d ", *(p + i));
    }

    return 0;
}
