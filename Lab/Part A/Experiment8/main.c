#include <stdio.h>
#include <string.h>

int main()
{
    char course_description[100],keyword[20];

    printf("Enter the course description: ");
    fgets(course_description,sizeof(course_description),stdin);
    printf("Enter the keyword to search for: ");
    fgets(keyword,sizeof(keyword),stdin);

    int loc_newline = strcspn(keyword,"\n");
    keyword[loc_newline] = '\0';

    if(strstr(course_description, keyword) != NULL){
        printf("Keyword: %s FOUND in the course description\n",keyword);
    }
    else{
        printf("Keyword: %s NOT FOUND in the course description\n",keyword);
    }

    return 0;
}
