#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    printf("i = %d\n",i);

    {
        int i = 25;
        printf("i = %d\n",i);
    }

    printf("i = %d\n",i);

    return 0;
}
