#include <stdio.h>
#include <string.h>

int symmetryMatrix(int n)
{
    int matrix[n][n];
    // 输入n*n矩阵
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 判断是否对称
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n, i > j; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int T, n;
    scanf("%d",&T);
    getchar();
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
    }

    if (symmetryMatrix(n))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}