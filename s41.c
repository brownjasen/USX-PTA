#include <stdio.h>
int getData(int n)
{
    int sum;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n, sum;

    while (scanf("%d", &n) != EOF)
    {
        sum = getData(n);
        printf("%d\n", sum);
    }

    return 0;
}