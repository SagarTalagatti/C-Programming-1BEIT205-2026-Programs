#include <stdio.h>

int main()
{
    int A[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int B[10] = {5, 125, 135, 155, 157, 162, 175, 178, 199, 1105};
    int C[20];

    printf("The elements of the original arrays are:\n");
    printf("A: ");
    for(int i=0;i<10;i++){
        printf("%d ",A[i]);
    }

    printf("\nB: ");
    for(int i=0;i<10;i++){
        printf("%d ",B[i]);
    }

    printf("\nMerging the 2 arrays into a single sorted array...\n");
    int a_index=0, b_index=0, c_index=0;
    while(a_index < 10 && b_index < 10){ // as long as both arrays have elements left...
        if(A[a_index] < B[b_index]){
            C[c_index++] = A[a_index++];
        }
        else{
            C[c_index++] = B[b_index++];
        }
    }

    if(a_index!=10){ // means elements left in A
        while(a_index < 10){
            C[c_index++] = A[a_index++];
        }
    }
    if(b_index!=10){ // means elements left in B
        while(b_index < 10){
            C[c_index++] = B[b_index++];
        }
    }

    printf("\nAfter merging, resultant array is:\n");
    for(int i=0;i<20;i++){
        printf("%d ",C[i]);
    }
    printf("\n");

    return 0;
}
