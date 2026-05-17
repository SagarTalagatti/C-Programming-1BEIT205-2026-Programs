#include <stdio.h>

// function declaration
int hasPassed(int m1, int m2, int m3);

int main(){
    int m1, m2, m3;
    float average;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    average = (m1 + m2 + m3) / 3.0;

    printf("Average Marks = %.2f\n", average);

    int passed = hasPassed(m1, m2, m3); // function call
    if(passed)
        printf("Result = PASS\n");
    else
        printf("Result = FAIL\n");

    return 0;
}

int hasPassed(int m1, int m2, int m3){
    if(m1 >= 40 && m2 >= 40 && m3 >= 40)
        return 1;
    else
        return 0;
}
