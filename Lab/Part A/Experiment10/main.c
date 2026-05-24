#include <stdio.h>

void swapBalances(float *a, float *b){
    float temp;

    temp = *a;
    *a = *b;
    *b = temp;

    return;
}

int main(){
    float balance1, balance2;

    printf("Enter the balance for Account 1: ");
    scanf("%f",&balance1);

    printf("Enter the balance for Account 2: ");
    scanf("%f",&balance2);

    printf("Before Swapping:\n");
    printf("Account 1 Balance = %.2f\n",balance1);
    printf("Account 2 Balance = %.2f\n",balance2);

    swapBalances(&balance1, &balance2);

    printf("After Swapping:\n");
    printf("Account 1 Balance = %.2f\n",balance1);
    printf("Account 2 Balance = %.2f\n",balance2);

    return 0;
}
