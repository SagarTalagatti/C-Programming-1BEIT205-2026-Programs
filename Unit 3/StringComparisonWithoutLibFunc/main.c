#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter string 1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter string 2: ");
    fgets(str2, sizeof(str2), stdin);

    // remove the newline \n added by fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int are_equal = 1; // this flag is set to 0 if the strings don't match at any point in the loop
    int i;
    for(i=0;str1[i]!='\0' && str2[i]!='\0';i++){
        if(str1[i] != str2[i]){
            are_equal = 0; // if a mismatch if found at any point, make the flag 0
            break; // now break from the loop because the strings are not equal
        }
    }

    // if one of the strings is having lesser length than the other, then both don't end at the same time and are not equal as well
    // so check whether both strings have terminated and if not, then they are not equal
    if(str1[i] != '\0' || str2[i] != '\0'){
        are_equal = 0;
    }

    if(are_equal){
        printf("The two strings are EQUAL!\n");
    }
    else{
        printf("The two strings are NOT EQUAL!\n");
    }

    return 0;
}
