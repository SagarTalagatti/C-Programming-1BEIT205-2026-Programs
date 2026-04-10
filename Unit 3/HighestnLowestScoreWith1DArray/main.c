#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int scores[MAX_SIZE];
    int n;

    printf("Enter the number of students in the class: ");
    scanf("%d",&n);

    if(n < 1 || n > MAX_SIZE){
        printf("Invalid number of students entered, it should be between %d and %d", 1, MAX_SIZE);
        return -1;
    }

    printf("Enter the scores of the %d students: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&scores[i]);
    }

    int high,low;

    high=low=scores[0];

    for(int i=1;i<n;i++){
        if(scores[i] > high){
            high = scores[i];
        }
        else if(scores[i] < low){
            low = scores[i];
        }
    }

    printf("The highest and lowest scores are:\n");
    printf("Highest = %d, Lowest = %d\n",high,low);

    return 0;
}
