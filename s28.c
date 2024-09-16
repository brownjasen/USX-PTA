#include <stdio.h>

int isPerfect(int num)
{
    int sum = 1;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
            if (i != num / i)
            {
                sum += num / i;
            }
        }
    }
    return sum == num && num != 1;
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int found = 0;
        printf("%d:", n);
        for (int i = 2; i <= n; i++)
        {
            if (isPerfect(i))
            {
                printf(" %d", i);
                found = 1;
            }
        }
        if (!found)
        {
            printf(" NULL");
        }
        printf("\n");
    }
    return 0;
}
