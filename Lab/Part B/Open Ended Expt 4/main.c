#include <stdio.h>

int main()
{
    int scores[50];
    int n;

    printf("Enter number of students: ");
    scanf("%d",&n);

    printf("Enter the scores of %d students in the 100m race:\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&scores[i]);
    }

    printf("Sorting the scores in Descending order now...\n");
    int swaps, t;
    // Bubble Sort algo
    for(int i=0; i<n-1; i++){
        // printf("In the %d pass now\n",i); // to check working of swaps flag
        swaps = 0; // for optimization
        for(int j=0; j<n-i-1; j++){
            if(scores[j] < scores[j+1]){
                t = scores[j];
                scores[j] = scores[j+1];
                scores[j+1] = t;
                swaps += 1;
            }
        }
        if(swaps == 0){ // means array already sorted!
            break;
        }
    }

    printf("The scores array after sorting:\n");
    for(int i=0; i<n; i++){
        printf("%d ",scores[i]);
    }
    printf("\n");

    return 0;
}
