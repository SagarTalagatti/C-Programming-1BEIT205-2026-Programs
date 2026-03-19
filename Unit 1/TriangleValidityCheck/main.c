#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    char *result;

    printf("Enter the lengths of the three sides of a triangle: ");
    scanf("%f %f %f",&a,&b,&c);

    // the below line won't compile, as it is invalid initialization
    //char result[4] = ((a + b > c) && (b + c > a) && (a + c > b)) ? "Yes" : "No";
    result = ((a + b > c) && (b + c > a) && (a + c > b)) ? "Yes" : "No";
    printf("Do the sides form a valid triangle?\n");
    printf("%s\n",result);

    return 0;
}
