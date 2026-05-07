#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *names[] = {
        "Rahul Sharma",
        "Sanjay Gupta",
        "Ashish Raina",
        "Deepak Jadhav",
        "Veena Joshi",
        "Reena Deshpande"
    };

    int birth_year_data[][2] = {
        {0, 1980},
        {1, 1982},
        {2, 1975},
        {3, 1985},
        {4, 1979},
        {5, 1970}
    };

    int idx = -1;

    char user_name[50];
    printf("Enter a user name to search for: ");
    gets(user_name);

    for(int i = 0; i < 6; i++){
        if(strcmp(names[i], user_name) == 0){
            idx = i;
            break;
        }
    }

    if(idx == -1){
        printf("User name not found in the records!!!\n");
    }
    else{
        int birth_year = birth_year_data[idx][1];
        printf("The birth year for the user %s is %d\n",user_name,birth_year);
    }

    return 0;
}
