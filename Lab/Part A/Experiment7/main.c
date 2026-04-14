#include <stdio.h>
#include <math.h>

int main()
{
    double x_deg, x_rad, sum, term, numerator;
    unsigned long long int factorial;
    unsigned int i;

    printf("Enter the value of x in degrees(-300.0 to 300.0): ");
    scanf("%lf",&x_deg);

    if(x_deg < -300 || x_deg > 300){
        printf("The entered value of x is out of the supported range for this program...\n");
        return -1;
    }

    x_rad = x_deg * 3.141592 / 180; // convert degrees to radians

    // initialize the variables for Taylor series approximation
    numerator = x_rad;
    factorial = 1;
    sum = 0;
    i = 2;

    do{
        term = numerator / factorial;
        sum += term;
        numerator = -numerator * x_rad * x_rad;
        factorial = factorial * i * (i + 1);
        i += 2;
    }while(fabs(term) >= 0.0001);

    printf("The value of sin(%f) approximated using Taylor Series expansion = %f\n",x_deg,sum);
    printf("The value of sin(%f) calculated using sin() function from math.h = %f\n",x_deg,sin(x_rad));

    return 0;
}
