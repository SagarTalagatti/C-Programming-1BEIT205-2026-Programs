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
                if(amount > 0)
                {
                    balance += amount;
                    printf("Amount Deposited Successfully\n");
                    printf("Updated Balance = %.2f\n", balance);
                }
                else{
                    printf("Invalid amount entered!!!\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount <= balance)
                {
                    balance -= amount;
                    printf("Withdrawal Successful\n");
                    printf("Updated Balance = %.2f\n", balance);
                }
                else
                {
                    printf("Insufficient Balance!!! Withdrawal not permitted!!!\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using ATM!!! Bye!!!\n");
                break;

            default:
                printf("Invalid Choice!!! Choice must be between 1-4!!!\n");
        }

    } while(choice != 4);

    return 0;
}
