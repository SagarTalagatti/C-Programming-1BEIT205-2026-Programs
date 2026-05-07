#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float y;
    char ch;
    double z;

    // printing memory addresses as unsigned integers
    printf("Mem. Addr. of int var x = %u\n",&x);
    printf("Mem. Addr. of float var y = %u\n",&y);
    printf("Mem. Addr. of char var ch = %u\n",&ch);
    printf("Mem. Addr. of double var x = %u\n",&z);

    // recommended way is to use %p
    printf("Mem. Addr. of int var x = %p\n",&x);
    printf("Mem. Addr. of float var y = %p\n",&y);
    printf("Mem. Addr. of char var ch = %p\n",&ch);
    printf("Mem. Addr. of double var x = %p\n",&z);

    return 0;
}
