#include <stdio.h>
int main()
{
    int T, n, temp, num;
    int a[10];
    int b[10];
    scanf("%d", &T);
    getchar();
    for (int i = 0; i < T; i++)
    {
        num = 0;
        scanf("%d", &n);
        getchar();
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &a[j]);
        }

        for (int p = 0; p < 10; p++)
        {
            for (int q = p + 1; q < 10; q++)
            {
                if (a[p] >= a[q])
                {
                    temp = a[p];
                    a[p] = a[q];
                    a[q] = temp;
                }
            }
        }
        for (int i = n; i < 10; i++)
        {
            b[num++] = a[i];
        }
        for (int j = 0; j < n; j++)
        {
            b[num++] = a[j];
        }
        for (int k = 0; k < 10; k++)
        {
            if (k == 0)
            {
                printf("%d", b[k]);
            }
            else
                printf(" %d", b[k]);
        }
    }

    return 0;
}