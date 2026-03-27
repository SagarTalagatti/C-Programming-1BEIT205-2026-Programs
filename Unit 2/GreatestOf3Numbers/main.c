#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3;
    float highest;

    printf("Enter 3 numbers: ");
    scanf("%f %f %f",&n1,&n2,&n3);

    if(n1 > n2){
        if(n1 > n3){
            highest = n1;
        }
        else{
            highest = n3;
        }
    }
    else if(n2 > n3){
        highest = n2;
    }
    else{
        highest = n3;
    }

    printf("Highest number = %f\n",highest);

    return 0;
}
