#include <stdio.h>

float add(float a, float b){
    return a+b;
}

float subtract(float a, float b){
    return a-b;
}

float multiply(float a, float b){
    return a*b;
}

float divide(float a, float b){
    return a/b;
}

int main(){
    int choice;
    float n1, n2;

    printf("Enter two real numbers: ");
    scanf("%f %f",&n1,&n2);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Choose an operation: ");
    scanf("%d",&choice);

    float result = 0.0f;

    if(choice == 1){
        result = add(n1,n2);
    }
    else if(choice == 2){
        result = subtract(n1, n2);
    }
    else if(choice == 3){
        result = multiply(n1, n2);
    }
    else if(choice == 4){
        if(n2 == 0){
            printf("Cannot divide by ZERO!!!\n");
        }
        else{
            result = divide(n1, n2);
        }
    }
    else{
        printf("Invalid choice...\n");
        return -1;
    }

    printf("The result = %.2f\n",result);

    return 0;
}
