#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char line[100];

    printf("Enter a line of text: ");
    gets(line);

    int word_count = 0, char_count = 0;
    char ch;
    for(int i=0; line[i]!='\0'; i++){
        ch = line[i];
        char_count++;

        if(!isspace(ch) && (i == 0 || isspace(line[i-1]))){
            word_count++;
        }
    }

    printf("The character count in the string = %d\n",char_count);
    printf("The word count in the string = %d\n",word_count);

    return 0;
}
