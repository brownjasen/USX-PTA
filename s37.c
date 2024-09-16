#include <stdio.h>
int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i <= n / 5; i++)
        {
            for (int j = 0; j <= n / 3; j++)
            {
                for (int k = 0; k <= n; k++)
                {
                    if ((i + j + k == n) && (5 * i + 3 * j + k / 3 == n) && (k % 3 == 0))
                    {
                        printf("%d %d %d\n", i, j, k);
                    }
                }
            }
        }
    }

    return 0;
}