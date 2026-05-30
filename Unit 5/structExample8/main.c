#include <stdio.h>
#include <stdlib.h>

struct Time{ // untagged structure with typedef
    int hh;
    int mm;
    int ss;
} t1;

int main()
{
    struct Time t2;

    t1.hh = 12;
    t1.mm = 25;
    t1.ss = 38;

    t2 = t1; // copying t1 into t2

    printf("Time t1= %d:%d:%d\n",t1.hh,t1.mm,t1.ss);
    printf("Time t2= %d:%d:%d\n",t2.hh,t2.mm,t2.ss);

    return 0;
}
