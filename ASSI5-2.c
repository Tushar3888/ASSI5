#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,dt,r1,r2;
printf("Enter coefficients a,b and c : ");
scanf("%f %f %f", &a, &b, &c);
if(a==0)
{
printf("Not a quadratic equation\n");
}
else
{
    dt = b*b - 4*a*c;
    printf("Discriminant = %f\n", dt);
    if(dt>0)
    {
        r1 = (-b + sqrt(dt))/(2*a);
        r2 = (-b - sqrt(dt))/(2*a);
        printf("Roots are real and distinct\n");
        printf("Roots are : %f and %f\n", r1, r2);
    }
    else if(dt==0)
    {
        r1 = -b/(2*a);
        printf("Roots are real and equal\n");
        printf("Root is : %f\n", r1);
    }
    else
    {
        printf("Roots are imaginary\n");
    }
}
}
