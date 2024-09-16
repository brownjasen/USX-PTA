#include <stdio.h>
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int T, n, m, result;
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d", &n, &m);
        result = gcd(n, m);
        printf("%d\n", result);
    }

    return 0;
}