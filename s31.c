#include <stdio.h>
int main()
{
    int n, sum;

    while (scanf("%d", &n) != EOF)
    {
        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }
        if (sum <= 2147483647)
        {
            printf("%d\n", sum);
            sum = 0;
        }
        else
            break;
    }

    return 0;
}