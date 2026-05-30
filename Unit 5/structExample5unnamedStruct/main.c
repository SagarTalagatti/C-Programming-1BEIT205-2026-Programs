#include <stdio.h>
#include <stdlib.h>

struct { // untagged structure
    int hh;
    int mm;
    int ss;
} t1, t2;

int main()
{
    t1.hh = 10;
    t1.mm = 59;
    t1.ss = 30;

    printf("Time= %d:%d:%d\n",t1.hh,t1.mm,t1.ss);

    return 0;
}
