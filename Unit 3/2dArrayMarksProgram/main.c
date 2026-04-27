#include <stdio.h>

int main()
{
    unsigned int stud_data[60][4];
    unsigned int n;

    printf("Enter the number of students: ");
    scanf("%u",&n);

    printf("Enter the details of %d students as roll_no m1 m2 m3:\n",n);
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            scanf("%u",&stud_data[i][j]);
        }
    }

    unsigned int total_high = 0;
    unsigned int total_marks, roll_no;

    for(int i=0;i<n;i++){
        total_marks = 0;
        for(int j=1;j<4;j++){
            total_marks = total_marks + stud_data[i][j];
        }
        if(total_marks > total_high){
            total_high = total_marks;
            roll_no = stud_data[i][0];
        }
        printf("Total Marks scored by student with roll no %u = %u\n",stud_data[i][0],total_marks);
    }

    printf("Highest Total Marks of %u were scored by student with roll no %u\n",total_high,roll_no);

    unsigned int subject_highest;
    for(int sub=1;sub<4;sub++){
        subject_highest = 0;
        for(int row=0;row<n;row++){
            if(stud_data[row][sub] > subject_highest){
                subject_highest = stud_data[row][sub];
                roll_no = stud_data[row][0];
            }
        }
        printf("The highest marks scored in subject %d by student with roll no. %u = %u\n",sub,roll_no,subject_highest);
    }

    return 0;
}
