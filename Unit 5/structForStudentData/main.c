#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    int rollno;
    char division;
    int marks[3];
};

int main()
{
    struct Student studs[100];
    int n;

    printf("Enter the number of students (1-100): ");
    scanf("%d",&n);

    printf("Enter the details of %d students:\n",n);
    for(int i=0; i<n; i++){
        getchar();
        printf("Student no. %d:\n",i+1);
        printf("Name: ");
        gets(studs[i].name);
        printf("Roll no.: ");
        scanf("%d",&studs[i].rollno);
        getchar();
        printf("Division: ");
        scanf("%c",&studs[i].division);
        printf("The marks scored in 3 subjects: ");
        for(int j=0; j<3; j++){
            scanf("%d",&studs[i].marks[j]);
        }
    }

    int total;
    float avg;
    printf("Printing the student details:\n");
    for(int i=0; i<n; i++){
        printf("Student no. %d\n",i+1);
        printf("Name: %s\n",studs[i].name);
        printf("Roll no.: %d\n",studs[i].rollno);
        printf("Division: %c\n",studs[i].division);
        total = 0;
        for(int j=0; j<3; j++){
            total += studs[i].marks[j];
        }
        avg = total / 3.0;
        printf("Total = %d, Average = %.2f\n",total,avg);
    }

    return 0;
}
