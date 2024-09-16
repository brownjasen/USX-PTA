#include <stdio.h>
int main()
{
    int m, p, n, sum, isFirst;
    while (scanf("%d %d %d", &m, &p, &n) != EOF)
    {
        int a[m][p];
        int b[p][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < p; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (int k = 0; k < p; k++)
        {
            for (int q = 0; q < n; q++)
            {
                scanf("%d", &b[k][q]);
            }
        }
        for (int i = 0; i < m; i++)
        {
            isFirst = 1;
            for (int j = 0; j < n; j++)
            {

                sum = 0;
                for (int k = 0; k < p; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                if (isFirst == 1)
                {
                    printf("%d", sum);
                    isFirst = 0;
                }
                else
                    printf(" %d", sum);
            }
            printf("\n");
        }
    }
}