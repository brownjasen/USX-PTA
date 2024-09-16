#include <stdio.h>

void getGhost(int n)
{
    int ghost[n][n];
    int totalRow[n];
    int totalCol[n];
    int maxRow = 0, maxCol = 0, max = 0; // 保存最大值行、列
    int currentRow = 0, currentCol = 0;

    for (int i = 0; i < n; i++)
    {
        totalCol[i]=0;
        totalRow[i] = 0;
    }
    
    // 输入n*n数据
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ghost[i][j]);
        }
    }

    //printf("data :%d",ghost[2][2]);
    // 每行合计
    while (currentRow < n)
    {
        for (int col = 0; col < n; col++)
        {
            totalRow[currentRow] = totalRow[currentRow] + ghost[currentRow][col];
        }
        currentRow++;
    }

    // 每列合计
    while (currentCol < n)
    {
        for (int row = 0; row < n; row++)
        {
            totalCol[currentCol] = totalCol[currentCol] + ghost[row][currentCol];
        }
        currentCol++;
    }

    //求出最大值，及其行列位置。
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max < (totalRow[i] + totalCol[j] - ghost[i][j]))  //减去重复计算一次
            {
                max = totalRow[i] + totalCol[j] - ghost[i][j];
                maxRow = i + 1;
                maxCol = j + 1;
            }
        }
    }

    printf("%d %d %d\n", maxRow, maxCol, max);
}

int main()
{
    int num;
    int n;
    scanf("%d", &num);
    getchar();
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&n);
        getGhost(n);
    }

    return 0;
}