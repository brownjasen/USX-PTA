#include <stdio.h>
int main()
{
    int T, n, sum = 1;
    scanf("%d", &T);
    for (int j = 0; j < T; j++)
    {
        scanf("%d", &n);
        if (n <= 12)
        {
            if (n == 0 || n == 1)
            {
                sum = 1;
            }
            else
            {
                for (int i = 1; i <= n; i++)
                {
                    sum = sum * i;
                }
            }

            printf("%d\n", sum);
        }
    }

    return 0;
}