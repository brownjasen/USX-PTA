#include <stdio.h>
int getSum(int n)
{
    int sum;
    sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    return sum;
}

int main()
{
    int a, b, sum;
    int a1, b1;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        a1 = getSum(a);
        b1 = getSum(b);
        if (a1 == b && b1 == a)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }

    return 0;
}