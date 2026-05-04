#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE1 50
#define SIZE2 60

int main()
{
    char s1[SIZE1], s2[SIZE2];
    char s3[SIZE1 + SIZE2 - 1]; // to hold both strings plus 1 \0 terminator

    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);

    // s3 = s1 + s2
    int idx = 0;
    for(int i=0; i<strlen(s1); i++){
        s3[idx] = s1[i];
        idx++;
    }

    for(int i=0; i<strlen(s2); i++){
        s3[idx] = s2[i];
        idx++;
    }

    s3[idx] = '\0';

    printf("After concatenation, s3:\n%s\n",s3);

    return 0;
}
