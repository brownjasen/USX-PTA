#include <stdio.h>
int main()
{
    int n, temp, sum;
    int a[20];
    int b[20];
    while (scanf("%d", &n) != EOF)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int j = 0; j < n; j++)
        {
            b[j] = a[j] / 2 + 1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
        for (int i = 0; i < n / 2 + 1; i++)
        {
            sum = sum + b[i];
        }
        printf("%d\n", sum);
    }

    return 0;
}