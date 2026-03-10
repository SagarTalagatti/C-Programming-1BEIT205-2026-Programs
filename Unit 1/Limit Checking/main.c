#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("===== CHARACTER TYPES =====\n");
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: 0 to %u\n\n", UCHAR_MAX);

    printf("===== SHORT TYPES =====\n");
    printf("short int: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short int: 0 to %u\n\n", USHRT_MAX);

    printf("===== INTEGER TYPES =====\n");
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %u\n\n", UINT_MAX);

    printf("===== LONG TYPES =====\n");
    printf("long int: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int: 0 to %lu\n\n", ULONG_MAX);

    printf("===== LONG LONG TYPES =====\n");
    printf("long long int: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int: 0 to %llu\n\n", ULLONG_MAX);

    printf("===== FLOATING POINT TYPES =====\n");
    printf("float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("long double: %Le to %Le\n\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
