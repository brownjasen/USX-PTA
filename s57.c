#include <stdio.h>
int getCubeData(int number)
{
    int index = 0;
    int data = 0;
    int hundreds, tens, units;
    hundreds = number / 100;
    tens = (number % 100) / 10;
    units = number % 10;
    data = hundreds * hundreds * hundreds + tens * tens * tens + units * units * units;
    if (data == number)
    {
        printf("%d=%d*%d*%d+%d*%d*%d+%d*%d*%d\n", data, hundreds, hundreds, hundreds, tens, tens, tens, units, units, units);
        index = 1;
    }
    return index;
}

int main()
{
    int small, big;
    int data;
    int index;
    while (scanf("%d %d", &small, &big) != EOF)
    {
        index = 0;
        for (int i = small; i <= big; i++)
        {
            index = (index == 0) ? getCubeData(i) : 1;
        }
        if (index == 0)
        {
            printf("none\n");
        }
    }

    return 0;
}