#include <stdio.h>
int main()
{
    int n, x, a[100], b[100];
    int index;
    int isInsert;
    while (scanf("%d %d", &n, &x) != EOF)
    {
        index = 0;
        isInsert = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int j = 0; j < n; j++)
        {
            if (a[j] < x || isInsert)
            {
                b[index++] = a[j];
            }
            else
            {
                b[index++] = x;
                b[index++] = a[j];
                isInsert = 1;
            }
        }
        if (x > a[n - 1])
        {
            b[index++] = x;
        }

        for (int k = 0; k < index; k++)
        {
            if (k == 0)
            {
                printf("%d", b[k]);
            }
            else
                printf(" %d", b[k]);
        }
        printf("\n");
    }
}