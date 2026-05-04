#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char line[100];

    printf("Enter a line of text:\n");
    gets(line);

    int lc_count, uc_count, dg_count, ws_count, sc_count;
    lc_count = uc_count = dg_count = ws_count = sc_count = 0;

    char ch;
    for(int i=0; line[i]!='\0'; i++){
        ch = line[i];
        if(isalpha(ch)){
            if(islower(ch)){
                lc_count++;
            }
            else{
                uc_count++;
            }
        }
        else if(isdigit(ch)){
            dg_count++;
        }
        else if(isspace(ch)){
            ws_count++;
        }
        else{
            sc_count++;
        }
    }
    printf("After processing the string, count of various characters is as follows:\n");
    printf("Lowercase letters = %d\n",lc_count);
    printf("Uppercase letters = %d\n",uc_count);
    printf("Digits = %d\n",dg_count);
    printf("Whitespaces = %d\n",ws_count);
    printf("Special characters = %d\n",sc_count);

    return 0;
}
