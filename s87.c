#include <stdio.h>
void process(int n, int m)
{
    int a[n];
    int b[n];
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = m; j < n; j++)
    {
        b[num] = a[j];
        num++;
    }
    for (int k = 0; k < m; k++)
    {
        b[num] = a[k];
        num++;
    }
    for (int q = 0; q < n; q++)
    {
        if (q == 0)
        {
            printf("%d", b[q]);
        }
        else
            printf(" %d", b[q]);
    }
    printf("\n");
}

int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        process(n, m);
    }

    return 0;
}