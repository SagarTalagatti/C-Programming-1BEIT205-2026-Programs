#include <stdio.h>

// function declaration with return type, fn name and parameter list!
void print_results(int, int, int);

int main()
{
    int m1, m2, m3;
    printf("Enter the marks scored by the student in 3 subjects: ");
    scanf("%d %d %d",&m1,&m2,&m3);

    print_results(m1,m2,m3);

    return 0;
}

void print_results(int m1, int m2, int m3){
    float avg;

    if(m1 < 40 || m2 < 40 || m3 < 40){
        printf("The student has FAILED!!!\n");
    }
    else{
        printf("The student has PASSED!!!\n");
        avg = (m1 + m2 + m3) / 3.0f;
        printf("The average marks scored by the student = %.2f\n", avg);
    }
    return;
}
