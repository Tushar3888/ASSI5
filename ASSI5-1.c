#include <stdio.h>

int main()
{
    int month, day, year;
    int md;
    printf("Enter a date : ");
    scanf("%d",&day);
    printf("Enter a month : ");
    scanf("%d",&month);
    printf("Enter a year : ");
    scanf("%d",&year);
    if(year>0)
    {
        if(month>=1 && month<=12)
        {
            if(month==2)
            {
                if((year%4==0 && year%100!=0) || (year%400==0))
                {
                    md=29;
                    printf("leap year\n");
            }
            else
            {
                md=28;
                    printf("not a leap year\n");
            }
}
else
{
    if(month==4 || month==6 || month==9 || month==11)
    {
        md=30;
    }
    else
    {
        md=31;
    }
}
if(month>=1 && month<=12)
{
    printf("valid date\n");
}
else{
     printf("invalid date\n");
}
        }
    }
}

        