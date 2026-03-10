#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first_name[] = "Tom";
    char middle_name = 'M';
    char *last_name = "Riddle";

    printf("Hello %s %c %s! Welcome to Hogwarts!!\n", first_name, middle_name, last_name);

    return 0;
}
