#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    float highest;

    printf("Enter 2 numbers: ");
    scanf("%f %f",&num1,&num2);

    if(num1 > num2){
        highest = num1;
    }
    else{
        highest = num2;
    }

    printf("The highest of the 2 numbers = %f\n",highest);

    return 0;
}
