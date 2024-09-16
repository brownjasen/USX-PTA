#include <stdio.h>
int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i <= n / 3; i++)
        {
            for (int j = 0; j <= n / 2; j++)
            {
                for (int k = 0; k <= n; k++)
                {
                    if ((i + j + k == n) && (3 * i + 2 * j + k / 2 == n) && (k % 2 == 0))
                    {
                        printf("%d %d %d\n", i, j, k);
                    }
                }
            }
        }
    }

    return 0;
}