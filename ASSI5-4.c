#include <stdio.h>
#include <math.h>
int main()
{
int ch,a,b;
do 
{
    printf("\n--- MENU DRIVEN CALCULATOR ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("5. Exit\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    if (ch >= 1 && ch <= 6)
    {
printf("Enter two numbers : ");
        scanf("%d %d",&a,&b);
    }
    switch (ch)
    {
    case 1:
        printf("Addition = %d\n",a+b);
        break;
    case 2:
        printf("Subtraction = %d\n",a-b);
        break;
    case 3:
        printf("Multiplication = %d\n",a*b);
        break;
    case 4:
        if (b != 0)
        {
            printf("Division = %d\n",a/b);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    case 5:
        if (b != 0)
        {
            printf("Modulus = %d\n",a%b);
        }
        else
        {
            printf("Error: Modulus by zero is not allowed.\n");
        }
        break;
    case 6:
        printf("Power = %.2f\n",pow(a,b));
        break;
    case 7:
        printf("Exiting...\n");
        break;
    default:
        printf("Invalid choice. Please try again.\n");
        break;
    }
}
while (ch != 7);
return 0;
}
