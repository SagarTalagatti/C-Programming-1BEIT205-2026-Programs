#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f, c;

    printf("Enter the temperature in degrees Farenheit:");
    scanf("%f",&f);

    c = (f - 32) * (5 / 9.0);

    printf("The temperature in degrees Celcius = %f\n",c);

    return 0;
}
