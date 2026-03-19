#include <stdio.h>
#include <stdlib.h>

int main()
{
    float speed_kmph, speed_mps;

    printf("Enter the speed in kmph: ");
    scanf("%f", &speed_kmph);
    speed_mps = (float)5 / 18 * speed_kmph;
    printf("Speed in metre/second (mps) = %.2f\n",speed_mps);

    return 0;
}
