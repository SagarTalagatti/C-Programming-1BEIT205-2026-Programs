#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f, c;

    printf("Enter the temperature in degrees Celcius:");
    scanf("%f",&c);

    f = (9.0 / 5) * c + 32;
    printf("Temperature in degrees Farenheit is: %f\n",f);

    return 0;
}
