#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int is_pal = 1;
    for(int i=0, j=strlen(str)-1; i<j; i++, j--){
        if(tolower(str[i])!=tolower(str[j])){
            is_pal = 0;
            break;
        }
    }

    if(is_pal){
        printf("The string is a PALLINDROME!!!\n");
    }
    else{
        printf("The string is NOT A PALLINDROME!!!\n");
    }

    return 0;
}
