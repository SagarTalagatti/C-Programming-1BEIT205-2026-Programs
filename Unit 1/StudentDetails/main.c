#include <stdio.h>
#include <stdlib.h>

int main()
{
    // input variables
    char fname[50], mname[30], lname[50];
    int age;
    float height;
    char gender;
    int m1, m2, m3;

    // output
    float avg;

    printf("Enter student details:\n");
    printf("Enter the first name, middle name and last name of the student: ");
    // don't write scanf("%s %s %s", &fname, &mname, &lname);
    scanf("%s %s %s",fname, mname, lname);

    printf("Enter the age of the student: ");
    scanf("%d",&age);

    printf("Enter the gender of the student (M/F): ");
    scanf(" %c", &gender);

    printf("Enter the height of the student: ");
    scanf("%f", &height);

    printf("Enter the marks scored in 3 subjects: ");
    scanf("%d %d %d",&m1,&m2,&m3);

    // cast to float before dividing to avoid integer division
    avg = (float)(m1 + m2 + m3) / 3;

    printf("\nStudent details are as follows:\n");
    printf("Name: %s %s %s\n",fname,mname,lname);
    printf("Age: %d, Gender: %c, Height: %.2f\n",age,gender,height);
    printf("Average marks in percentage: %.2f%%\n",avg);

    return 0;
}
