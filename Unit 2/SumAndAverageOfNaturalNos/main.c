#include <stdio.h>

int main()
{
    int n, sum=0;
    float avg;

    printf("Enter a value for n:");
    scanf("%d",&n);

    if(n<1){
        printf("Invalid input!!!\n");
    }
    else{
        for(int i=1;i<=n;i++){
            sum += i; //sum = sum + i;
        }
        avg = (float)sum / n;

        printf("The sum of first %d natural numbers = %d\n",n,sum);
        printf("The average of first %d natural numbers = %f\n",n,avg);
    }

    return 0;
}
