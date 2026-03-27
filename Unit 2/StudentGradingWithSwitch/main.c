#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;

    printf("Enter the marks scored by the student: ");
    scanf("%d",&marks);

    int range = marks / 10;

    switch(range){
        case 10:
        case 9:
            printf("Grade = A\n");
            break;
        case 8:
        case 7:
            printf("Grade = B\n");
            break;
        case 6:
        case 5:
            printf("Grade = C\n");
            break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Grade = F\n");
            break;
        default:
            printf("Invalid marks!!! Valid range = 0 to 100...\n");
    }

    return 0;
}
