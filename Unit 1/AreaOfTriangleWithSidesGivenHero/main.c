#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,s,area;

    printf("Enter the 3 lengths of sides of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s-a) * (s-b) * (s-c) );

    printf("Area of the triangle = %.3f\n", area);

    return 0;
}
