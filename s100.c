#include <stdio.h>
#include <string.h>

int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *MONTH_NAMES[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

int isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main()
{
    char month[3];
    int day, year;
    int sum;
    int MCount;
    while (scanf("%s %d %d", month, &day, &year) != EOF)
    {
        MCount = 0;
        sum = 0;
        while (strcmp(month, MONTH_NAMES[MCount]))
        {
            MCount++;
        }
        for (int i = 0; i < MCount; ++i)
        {
            sum += daysInMonth[i] + (isLeapYear(year) && i == 1);
        }
        printf("%d\n", sum + day);
    }
    return 0;
}