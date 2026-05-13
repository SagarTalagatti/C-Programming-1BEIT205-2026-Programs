#include <stdio.h>

int main()
{
    char str[100];
    char *p_begin, *p_end;

    printf("Enter a string(99 characters max!):\n");
    gets(str);

    p_begin = p_end = str;

    for(int i=0; str[i]!='\0'; i++){
        p_end++;
    }

    unsigned int str_length = p_end - p_begin;
    printf("The length of the entered string is: %u\n", str_length);

    return 0;
}
