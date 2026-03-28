#include <stdio.h>
#include <ctype.h>

int main()
{
    int n1, n2, result, op_valid;
    char choice;

    do{
        printf("===========Simple Calculator===========\n");
        printf("Select the operation that you wish to perform:\n");
        printf("+ for Addition\n");
        printf("- for Subtraction\n");
        printf("* for Multiplication\n");
        printf("/ for Division\n");
        printf("%% for Modulus\n");
        printf("Enter your choice: ");
        scanf(" %c",&choice);

        printf("Enter numbers n1 and n2: ");
        scanf("%d %d",&n1,&n2);

        op_valid = 1;

        switch(choice){
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            if(n2 == 0){
                printf("The denominator cannot be ZERO!!!\n");
                op_valid = 0;
            }
            else {
                result = n1 / n2;
            }
            break;
        case '%':
            result = n1 % n2;
            break;
        default:
            printf("Invalid Operator!!! Try aagin later...\n");
            op_valid = 0;
        } // end of switch

        if(op_valid){
            printf("Result = %d\n",result);
        }

        printf("Do you want to continue (y/n)? ");
        scanf(" %c",&choice);
    } while(tolower(choice) != 'n');

    return 0;
}
