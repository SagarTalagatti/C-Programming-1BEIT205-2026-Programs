#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, height;
    double length, width;

    base = 10.5f;
    height = 20.0f;

    length = 20.0;
    width = 50.0;

    float area_triangle;
    double area_rectangle;

    area_triangle = 0.5f * base * height;
    area_rectangle = length * width;

    printf("Area of the triangle = %f\n",area_triangle);
    printf("Area of the rectangle = %lf\n",area_rectangle);

    return 0;
}
