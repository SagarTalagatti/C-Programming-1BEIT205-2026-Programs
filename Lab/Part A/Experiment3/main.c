#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000, amount;

    do
    {
        printf("\n------ ATM MENU ------\n");
        printf("1. Deposit Cash\n");
        printf("2. Withdraw Cash\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount Deposited Successfully\n");
                printf("Current Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount <= balance)
                {
                    balance -= amount;
                    printf("Withdrawal Successful\n");
                    printf("Current Balance = %.2f\n", balance);
                }
                else
                {
                    printf("Insufficient Balance\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using ATM\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}
