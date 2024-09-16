#include <stdio.h>
void printNum(int currentRow, int halfRow)
{
    int step = 1;
    if (currentRow <= halfRow)
    {
        for (int i = 1; i <= currentRow; i++)
        {
            printf("%d", currentRow);
        }
        printf("\n");
    }
    if (currentRow > halfRow)
    {
        diff = currentRow - halfRow;
        for (int j = currentRow - halfRow; j < halfRow; j++)
        {
            printf("%d", halfRow - diff);
        }

        printf("\n");
    }
}

int main()
{
    int T, num;
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &num);
        for (int j = 1; j <= 2 * num - 1; j++)
        {
            printNum(j, num);
        }
    }

    return 0;
}