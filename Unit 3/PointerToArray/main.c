#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr; // &arr[0];

    int sum = 0;
    float avg = 0;

    for(int i = 0; i < 5; i++){
        sum += p[i];
        // sum += *p;
        // if you write sum += *p; p++;
    }

    avg = sum / 5.0;

    printf("Sum of array elements = %d\n",sum);
    printf("Average of array elements = %.2f\n",avg);

    return 0;
}
