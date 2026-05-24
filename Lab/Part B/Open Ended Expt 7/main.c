#include <stdio.h>

void swapByValue(float c1, float c2){
    float temp;
    temp = c1;
    c1 = c2;
    c2 = temp;

    printf("Preview of swapping using call by value:\n");
    printf("Value 1 = %.2f\nValue 2 = %.2f\n",c1,c2);

    return;
}

void swapByReference(float *c1, float *c2){
    float temp;
    temp = *c1;
    *c1 = *c2;
    *c2 = temp;

    printf("Actual swapping using call by reference:\n");
    printf("Value 1 = %.2f\nValue 2 = %.2f\n",*c1,*c2);

    return;
}

int main()
{
    float cur1, cur2;
    printf("Enter the value of currency 1: ");
    scanf("%f",&cur1);
    printf("Enter the value of currency 2: ");
    scanf("%f",&cur2);

    printf("Values of currency 1 and currency 2 before calling swapByValue():\n");
    printf("Currency 1 = %.2f \nCurrency 2 = %.2f\n",cur1,cur2);

    swapByValue(cur1, cur2);

    printf("Values of currency 1 and currency 2 after calling swapByValue():\n");
    printf("Currency 1 = %.2f \nCurrency 2 = %.2f\n",cur1,cur2);

    printf("Values of currency 1 and currency 2 before calling swapByReference():\n");
    printf("Currency 1 = %.2f \nCurrency 2 = %.2f\n",cur1,cur2);

    swapByReference(&cur1, &cur2);

    printf("Values of currency 1 and currency 2 after calling swapByReference():\n");
    printf("Currency 1 = %.2f \nCurrency 2 = %.2f\n",cur1,cur2);

    return 0;
}
