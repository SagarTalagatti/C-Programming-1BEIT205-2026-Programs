#include <stdio.h>

int main(){
    int n, i, j, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    if(n<1){
        printf("Invalid input! Number of rows cannot be zero or negative...\n");
    }
    else{
        for(i = 1; i <= n; i++){
            for(j = 1; j <= i; j++){
                printf("%-2d ", num);
                num++;
            }
            printf("\n");
        }
    }
    return 0;
}
