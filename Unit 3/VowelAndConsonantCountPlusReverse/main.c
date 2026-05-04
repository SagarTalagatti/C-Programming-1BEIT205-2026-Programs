#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char string[MAX_SIZE];

    printf("Enter a string(max 100 characters): ");
    fgets(string,sizeof(string),stdin);

    char ch;
    int num_vowels = 0, num_consonants = 0;
    for(int i=0;string[i]!='\0';i++){
        if(isalpha(string[i])){
            ch = tolower(string[i]);
            switch(ch){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    num_vowels++;
                    break;
                default:
                    num_consonants++;
            }
        }
    }

    printf("The number of vowels in your string = %d\n",num_vowels);
    printf("The number of consonants in your string = %d\n",num_consonants);

    int len = strlen(string);
    char temp;
    for(int j= len - 1, i=0; j > i; j--, i++){
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }

    printf("The reversed string is:\n%s\n",string);

    return 0;
}
