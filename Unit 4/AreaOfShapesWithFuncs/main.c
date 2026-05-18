#include <stdio.h>

#define PI 3.142

float areaOfCircle(float radius){
    float area = PI * radius * radius;
    return area;
}

float areaOfTriangle(float base, float height){
    float area = 0.5 * base * height;
    return area;
}

float areaOfRectangle(float length, float breadth){
    float area = length * breadth;
    return area;
}

int main()
{
    int choice;
    float area;

    printf("1. Circle\n");
    printf("2. Triangle\n");
    printf("3. Rectangle\n");
    printf("Select an option: ");
    scanf("%d",&choice);

    if(choice == 1){
        float rad;
        printf("Enter the radius of the circle: ");
        scanf("%f",&rad);
        area = areaOfCircle(rad);
        printf("Area of circle = %.2f\n",area);
    }
    else if(choice == 2){
        float b, h;
        printf("Enter the base and height of the triangle: ");
        scanf("%f %f",&b,&h);
        area = areaOfTriangle(b,h);
        printf("Area of triangle = %.2f\n",area);
    }
    else if(choice == 3){
        float b, h;
        printf("Enter the length and breadth of the rectangle: ");
        scanf("%f %f",&b,&h);
        area = areaOfRectangle(b,h);
        printf("Area of rectangle = %.2f\n",area);
    }
    else{
        printf("Invalid choice...\n");
    }

    return 0;
}
