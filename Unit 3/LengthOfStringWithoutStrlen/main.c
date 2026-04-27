#include <stdio.h>
#include <string.h>

int main()
{
    char msg[100];
    int len = 0;

    printf("Enter a string: ");
    fgets(msg,sizeof(msg),stdin);

    int loc_of_newline = strcspn(msg,"\n");
    msg[loc_of_newline] = '\0';

    for(int i=0;msg[i]!='\0';i++){ // NULL char is backslash digit 0
        len++;
    }

    printf("The length of the entered string = %d\n",len);
    return 0;
}
