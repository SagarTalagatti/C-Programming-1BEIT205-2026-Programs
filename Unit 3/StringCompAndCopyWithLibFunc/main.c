#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[50];
    char s2[50];

    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);

    int comp_status = strcmp(s1, s2);
    if(comp_status == 0){
        printf("The two strings are EQUAL in all respects!\n");
    }
    else{
        printf("The two strings are NOT EQUAL in all respects!\n");
    }

    // copying s1 into s2
    strcpy(s2, s1);
    printf("After copying, s2 = %s\n",s2);

    return 0;
}
