#include <stdio.h>
int main()
{
    int T, n, num, sum;

    scanf("%d", &T);
    getchar();
    for (int j = 0; j < T; j++)
    {
        scanf("%d", &n);
        while (n != 0)
        {
            scanf("%d", &num);
            n = n - 1;
            sum = sum + num;
            // printf("sum=%d\n",sum);
        }

        if (sum % 3 == 0 && sum % 5 == 0 && sum % 7 == 0)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }

    return 0;
}