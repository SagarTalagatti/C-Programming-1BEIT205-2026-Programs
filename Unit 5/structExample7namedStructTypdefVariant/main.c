#include <stdio.h>
#include <stdlib.h>

typedef struct TimeStruct{ // combining typedef with declaration
    int hh;
    int mm;
    int ss;
} time; // now both struct TimeStruct as well as time will work for declaring variables of this type

int main()
{
    struct TimeStruct t1;
    time t2 = {15,15,15};
    t1.hh = 12;
    t1.mm = 25;
    t1.ss = 38;

    printf("Time= %d:%d:%d\n",t1.hh,t1.mm,t1.ss);
    printf("Time= %d:%d:%d\n",t2.hh,t2.mm,t2.ss);

    return 0;
}
