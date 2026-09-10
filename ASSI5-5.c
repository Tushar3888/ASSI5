#include <stdio.h>
int main()
{
    int ch;
    float bal=5000.0,amount, rate, time, interest;
    do
    {
      printf("\n--- BANK TRANSACTION MENU ---\n");
      printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Calculate Interest\n");
        printf("5. Exit\n");
        printf("enter your choice");
        scanf("%d", &ch);
switch(ch)
{
    case 1:
        printf("Current Balance = %.2f\n", bal);
        break;
    case 2:
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        if(amount>0)
        {
            bal += amount;
            printf("Amount deposited successfully. New Balance = %.2f\n", bal);
        }
        else
        {
            printf("Invalid deposit amount.\n");
        }
        break;
    case 3:
    printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        if(amount <= 0)
        {
            printf("Invalid withdrawal amount\n");
        }
        else if (amount > bal)
        {
            printf("Insufficient balance\n");
        }
        else
        {
            bal -= amount;
            printf("Amount withdrawn successfully. New Balance = %.2f\n", bal);
        }
        break;
    case 4:
    printf("Enter annual interest rate: ");
        scanf("%f", &rate);
        printf("Enter time in years: ");
        scanf("%f", &time);
        if (rate >= 0 && time > 0)
        {
            interest = (bal * rate * time) / 100;
            printf("Interest = %.2f\n", interest);
        }
        else
        {
            printf("Invalid input for interest calculation.\n");
        }
        break;
    case 5:
    printf("Exiting...\n");
        break;
        default:
        printf("Invalid choice. Please try again.\n");
    }
}
while (ch != 5);
return 0;
}
