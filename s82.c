#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int num[n];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &num[i]);
        }
        qsort(num, n, sizeof(int), compare);

        for (int i = 0; i < n; i++)
        {
            printf("%d",num[i]);
            if (i < n - 1)
            {
                printf(" ");
            }
        }
    }

    return 0;
}