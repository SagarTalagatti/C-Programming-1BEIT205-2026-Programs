#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    char USN[11];
    int age;
    int semester;
    int m1;
    int m2;
    int m3;
    float avg;
} s1,s2,s3;

int main()
{
    // below init not allowed!
    // s3 = {"pqr","123",18,2,10,20,30,20.0};

    // without reading user input, init s3 member by member
    strcpy(s3.name,"fname");
    strcpy(s3.USN,"2GI25CS001");
    s3.age = 18;
    s3.semester = 2;
    printf("Enter m1, m2, m3 for s3: ");
    scanf("%d %d %d",&s3.m1,&s3.m2,&s3.m3);
    s3.avg = (s3.m1 + s3.m2 + s3.m3) / 3.0;

    printf("Student s3 details are:\n");
    printf("Name: %s\n",s3.name);
    printf("USN: %s\n",s3.USN);
    printf("Age: %d\n",s3.age);
    printf("Semester: %d\n",s3.semester);
    printf("m1,m2,m3: %d, %d, %d\n",s3.m1,s3.m2,s3.m3);
    printf("Avg: %.2f\n",s3.avg);

    return 0;
}
