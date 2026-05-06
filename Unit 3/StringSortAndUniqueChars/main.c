#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);
    char tmp;
    for(int i=0; i<len-1; i++){
        for(int j=0; j<len-i-1; j++){
            if(str[j]>str[j+1]){
                tmp = str[j];
                str[j] = str[j+1];
                str[j+1] = tmp;
            }
        }
    }

    printf("The sorted string is:\n%s\n",str);

    printf("The unique characters in the string are:\n");
    for(int i=0;i<len;i++){
        if(i!=0 && str[i]==str[i-1]){
            continue;
        }
        printf("%c\n",str[i]);
    }

    return 0;
}
