#include <stdio.h>
void horsePoint(int row, int column)
{
    int num[row][column];
    int min, max;
    int minPosition;
    int success;
    int isEnd;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    for (int m = 0; m < row; m++)
    {
        success = 1;
        min = num[m][0];
        for (int n = 0; n < column; n++)
        {
            if (min >= num[m][n])
            {
                min = num[m][n];
                minPosition = n;
            }
        }
        for (int k = 0; k < row; k++)
        {

            if (min < num[k][minPosition])
            {
                success = 0;
                break;
            }
        }

        if (success == 1)
        {
            printf("%d\n", min);
            break;
        }
    }

    if (success == 0)
    {
        printf("Impossible\n");
    }
}

int main()
{
    int T, row, column;
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d", &row, &column);
        horsePoint(row, column);
    }

    return 0;
}