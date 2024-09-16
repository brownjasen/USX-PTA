#include <stdio.h>
// 打印第currentRow行
void printStar(int currentRow, int totalRow)
{
    int blank, stars;
    stars = currentRow * 2 - 1;
    blank = (totalRow * 2 - 1 - stars) / 2;
    for (int j = 1; j <= totalRow * 2; j++)
    {
        if (blank > 0)
        {
            printf(" ");
            blank--;
        }
        else if ((blank == 0) && (stars > 0))
        {
            printf("*");
            stars--;
        }
    }
    printf("\n");
}

int main()
{
    int row;
    while (scanf("%d", &row) != EOF)
    {
        for (int i = 1; i <= row; i++)
        {
            printStar(i, row);
        }
    }

    return 0;
}

