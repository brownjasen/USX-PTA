#include <stdio.h>

long long factorial(int num)
{
    long long result = 1;
    for (int i = 2; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

long long combination(int n, int m)
{
    if (m > n)
    {
        return 0;
    }
    return factorial(n) / (factorial(m) * factorial(n - m));
}

int main()
{
    int n, m;

    while (scanf("%d %d", &n, &m) != EOF)
    {
        printf("%lld\n", combination(n, m));
    }

    return 0;
}
