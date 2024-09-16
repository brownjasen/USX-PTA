#include <stdio.h>

// 打印第currentRow行
void printStar(int currentRow, int totalRow)
{
    int startsUp;
    int starsDown;
    int blankUp;
    int blankDown;
    if (currentRow <= totalRow)
    {
        startsUp = (totalRow - currentRow) * 2 + 1;
        blankUp = currentRow - 1;
        for (int j = 1; j <= totalRow * 2 - 1; j++)
        {
            if (blankUp > 0)
            {
                printf(" ");
                blankUp--;
            }
            else if (startsUp > 0)
            {
                printf("*");
                startsUp--;
            }
        }
    }
    else
    {
        starsDown = (currentRow - totalRow) * 2 + 1;
        blankDown = totalRow * 2 - 1 - currentRow;
        for (int i = 1; i <= totalRow * 2 - 1; i++)
        {
            if (blankDown > 0 && starsDown > 0)
            {
                printf(" ");
                blankDown--;
            }
            else if (starsDown > 0)
            {
                printf("*");
                starsDown--;
            }
        }
    }

    printf("\n");
}

int main()
{
    int row;
    while (scanf("%d", &row) != EOF)
    {
        for (int i = 1; i <= row * 2 - 1; i++)
        {
            printStar(i, row);
        }
        row = 0;
    }

    return 0;
}
