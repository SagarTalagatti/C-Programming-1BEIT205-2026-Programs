#include <stdio.h>
#include <stdlib.h>

struct Distance{
    float feet;
    float inches;
};

int main()
{
    struct Distance dist;

    printf("Enter the distance in feet: ");
    scanf("%f",&dist.feet);
    printf("Enter the distance in inches: ");
    scanf("%f",&dist.inches);

    float dist_in_feet = dist.feet + dist.inches / 12;
    float dist_in_inches = dist.inches + dist.feet * 12;

    printf("The final distance in a single unit:\n");
    printf("Feet = %.2f\n",dist_in_feet);
    printf("Inches = %.2f\n",dist_in_inches);

    return 0;
}
