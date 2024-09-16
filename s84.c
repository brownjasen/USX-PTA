#include <stdio.h>

void printMatrix(int N)
{
    int stepX, stepY;
    int printData;
    int first = 1;
    stepY = 0;
    for (int i = 1; i <= N; i++)
    {
        first = first + stepY;
        printData = first;
        stepX = i;
        for (int j = i; j <= N; j++)
        {
            if (j == N)
            {
                printf("%d", printData);
            }
            else
                printf("%d ", printData);
            stepX++;
            printData = printData + stepX;
        }
        printf("\n");
        stepY++;
    }
}

int main()
{
    int T;
    int number;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &number);
        printMatrix(number);
    }

    return 0;
}