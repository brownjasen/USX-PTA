#include <stdio.h>

// 打印第currentRow行
void printStar(int currentRow, int totalRow, char ch)
{
    int stars = currentRow * 2 - 1;
    int blank = totalRow - currentRow;
    for (int i = 1; i <= totalRow * 2 - 1; i++)
    {
        if (blank > 0 && stars > 0)
        {
            printf(" ");
            blank--;
        }
        else if (stars > 0)
        {
            printf("%c", ch);
            stars--;
        }
    }

    printf("\n");
}

int main()
{
    int row;
    char ch;
    while (scanf("%c %d", &ch, &row) != EOF)
    {
        for (int i = 1; i <= row; i++)
        {
            printStar(i, row, ch);
        }
        row = 0;
    }

    return 0;
}
