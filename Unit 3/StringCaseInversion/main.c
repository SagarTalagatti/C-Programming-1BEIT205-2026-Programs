#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[100];

    printf("Enter a string (max. 100 characters): ");
    fgets(string, sizeof(string), stdin);

    char ch;
    for(int i=0; string[i] != '\0'; i++){
        ch = string[i];
        if(islower(ch)){ // check for lowercase and convert to uppercase
            string[i] = toupper(ch);
        }
        else{ // if not lowercase, then it is uppercase, so convert to lowercase
            string[i] = tolower(ch);
        }
    }

    printf("The string after performing case inversion:\n");
    puts(string);

    return 0;
}
