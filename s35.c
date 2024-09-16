#include <stdio.h>

int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int days_in_month(int year, int month)
{
    if (month == 2)
    {

        if (is_leap_year(year))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {

        return 30;
    }
    else
    {

        return 31;
    }
}

int main()
{
    int year, month;

    while (scanf("%d %d", &year, &month) != EOF)
    {

        printf("%d\n", days_in_month(year, month));
    }

    return 0;
}
