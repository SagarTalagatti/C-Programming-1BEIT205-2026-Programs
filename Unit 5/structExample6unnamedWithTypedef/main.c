#include <stdio.h>
#include <stdlib.h>

typedef struct { // untagged structure with typedef
    int hh;
    int mm;
    int ss;
} time;

int main()
{
    time t1;
    t1.hh = 12;
    t1.mm = 25;
    t1.ss = 38;

    printf("Time= %d:%d:%d\n",t1.hh,t1.mm,t1.ss);

    return 0;
}
