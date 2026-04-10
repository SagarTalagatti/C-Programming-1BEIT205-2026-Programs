#include <stdio.h>

int main()
{
    int arr[50];
    int n, sum_even, sum_odd;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    sum_even = sum_odd = 0;

    printf("Enter the %d array elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            sum_even += arr[i];
        }
        else{
            sum_odd += arr[i];
        }
    }

    printf("The sum of even elements = %d\n",sum_even);
    printf("The sum of odd elements = %d\n",sum_odd);

    return 0;
}
