#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[100], str2[100];
    int char_count[26] = {0};

    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);

    int len1 = strlen(str1), len2 = strlen(str2);
    char ch;
    for(int i = 0; i < len1; i++){
        if(isalpha(str1[i])){
            ch = tolower(str1[i]);
            char_count[ch - 97] += 1;
        }
    }

    for(int i = 0; i < len2; i++){
        if(isalpha(str2[i])){
            ch = tolower(str2[i]);
            char_count[ch - 97] -= 1;
        }
    }

    int is_anagram = 1;
    for(int i = 0; i < 26; i++){
        if(char_count[i]!=0){
            is_anagram = 0;
            break;
        }
    }

    if(is_anagram){
        printf("The strings are ANAGRAMS!\n");
    }
    else{
        printf("The strings are NOT ANAGRAMS!\n");
    }

    return 0;
}
