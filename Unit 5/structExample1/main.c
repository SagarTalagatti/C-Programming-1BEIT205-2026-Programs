#include <stdio.h>

struct Student{
    char name[50];
    char USN[11];
    int age;
    int semester;
    int m1;
    int m2;
    int m3;
};

int main()
{
    struct Student s1;
    printf("Enter student details:\n");
    printf("Name: ");
    gets(s1.name);
    printf("USN: ");
    scanf("%s",s1.USN);

    printf("Student details are:\n");
    printf("Name: %s\n",s1.name);
    printf("USN: %s\n",s1.USN);
    printf("Age: %d\n",s1.age);
    printf("Semester: %d\n",s1.semester);
    printf("m1,m2,m3: %d, %d, %d\n",s1.m1,s1.m2,s1.m3);

    return 0;
}
