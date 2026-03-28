#include <stdio.h>
#include <math.h>

int main()
{
    float amount, rate, maturity;
    int days, age;
    float time;

    printf("Enter deposit amount: ");
    scanf("%f", &amount);

    printf("Enter number of days: ");
    scanf("%d", &days);

    printf("Enter age of depositor: ");
    scanf("%d", &age);

    // Determine the interest rate based on the term of the deposit
    if(days < 30)
    {
        printf("Invalid deposit term entered!!! The minimum is 30 days...\n");
        return -1;
    }
    else if (days >= 30 && days <= 60)
        rate = 6.0;
    else if (days <= 90)
        rate = 6.5;
    else if (days <= 180)
        rate = 7.0;
    else if (days <= 365)
        rate = 8.0;
    else
        rate = 8.5;

    // Senior citizen benefit based on age and deposit amount constraint
    if (age >= 60 && amount > 50000)
        rate += 1.0;

    // Convert days to years
    time = days / 365.0;

    // Compound Interest Formula
    maturity = amount * pow((1 + rate / 100), time);

    printf("\nInterest Rate: %.2f%%", rate);
    printf("\nTime (in years): %.2f", time);
    printf("\nMaturity Amount: %.2f\n", maturity);

    return 0;
}
