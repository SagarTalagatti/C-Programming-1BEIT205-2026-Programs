#include <stdio.h>

int main()
{
    unsigned int n1, n2, rem, temp, t1, t2, lcm;

    printf("Enter two positive integers: ");
    scanf("%u %u",&n1,&n2);

    t1 = n1;
    t2 = n2;

    while(n2 > 0){
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    lcm = t1 * t2 / n1;

    printf("GCD = %u\n",n1);
    printf("LCM = %u\n",lcm);

    return 0;
}
