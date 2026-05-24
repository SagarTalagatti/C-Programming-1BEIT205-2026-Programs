#include <stdio.h>

#define MAX 100

struct Student{
    char name[50];
    char usn[11];
    int marks[3];
    float average;
};

int main(){
    struct Student students[MAX];
    int n, stud_total;
    float class_avg = 0;

    printf("Enter the number of students (1-100): ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        getchar();// to consume the \n left over by the preceding scanf

        printf("Enter the details of student %d\n",i+1);
        printf("Name: ");
        gets(students[i].name);

        printf("USN: ");
        gets(students[i].usn);

        stud_total = 0;
        printf("Enter the marks in 3 subjects: ");
        for(int j=0; j<3; j++){
            scanf("%d",&students[i].marks[j]);
            stud_total += students[i].marks[j];
        }
        students[i].average = stud_total / 3.0;

        class_avg += students[i].average;
        printf("===============================================\n");
    }

    class_avg = class_avg / n;
    printf("The class average = %.2f\n",class_avg);

    printf("\nStudents scoring above the class average:\n");
    for(int i=0; i<n; i++){
        if(students[i].average > class_avg){
            printf("Name: %s\n",students[i].name);
            printf("USN: %s\n",students[i].usn);
            printf("Average scored: %.2f\n",students[i].average);
        }
    }

    printf("\nStudents scoring below the class average:\n");
    for(int i=0; i<n; i++){
        if(students[i].average < class_avg){
            printf("Name: %s\n",students[i].name);
            printf("USN: %s\n",students[i].usn);
            printf("Average scored: %.2f\n",students[i].average);
        }
    }

    return 0;
}
