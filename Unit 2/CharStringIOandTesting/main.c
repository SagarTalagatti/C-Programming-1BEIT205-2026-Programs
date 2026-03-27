#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[30], name_2[30];

    printf("Enter a name: ");
    fgets(name,30,stdin);
    //fgets(name_2,30,stdin);

    puts("Entered name is:");
    puts(name);

    return 0;
}
