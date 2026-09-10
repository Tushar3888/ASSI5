#include <stdio.h>
int main()
{
    float wt, ht, bmi;
    printf("Enter weight in kg : ");
    scanf("%f",&wt);
    printf("Enter height in m : ");
    scanf("%f",&ht);
    if(wt<0 || ht<0)
    {
        printf("Invalid input\n");
    }
    else
    {
        bmi = wt/(ht*ht);
        printf("BMI = %f\n",bmi);
        if(bmi<18.5)
        {
            printf("Underweight\n");
        }
        else if(bmi<25)
        {
            printf("Normal weight\n");
        }
        else if(bmi<30)
        {
            printf("Overweight\n");
        }
        else if(bmi<35)
        {
            printf("Obesity (Class I)\n");
        }
        else if(bmi<40)
        {
            printf("Obesity (Class II)\n");
        }
        else
        {
            printf("Obesity (Class III)\n");
        }
    }
    return 0;
}
