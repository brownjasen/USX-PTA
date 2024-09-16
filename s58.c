#include <stdio.h>
int main()
{
    int T, n, k, total;
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d", &n, &k);
        for (int j = 1; j <= n - 1; j++)
        {
            k = (k + 1) * 3;
        }
        printf("%d", k);
    }

    return 0;
}