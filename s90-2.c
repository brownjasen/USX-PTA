#include <stdio.h>

void inputData(int num, int *p)
{
    for (int i = 0; i < num; i++)
    {
        scanf("%d", (p + i));
        // printf("input:%d",*(p+i));
    }
}

int main()
{
    int n, x, k;
    int T;
    int firstArray[100], secondArray[100];
    int mergedArray[200];
    int firstCount, secondCount;
    int firstPrint, secondPrint;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        firstPrint = 0, secondPrint = 0;
        // 输入第一个数组
        scanf("%d", &firstCount);
        getchar();
        inputData(firstCount, firstArray);

        // 输入第二个数组
        scanf("%d", &secondCount);
        getchar();
        inputData(secondCount, secondArray);

        // 合并打印输出
        k = 0;
        while (firstPrint < firstCount && secondPrint < secondCount)
        {
            if (firstArray[firstPrint] < secondArray[secondPrint])
                mergedArray[k++] = firstArray[firstPrint++];
            else
                mergedArray[k++] = secondArray[secondPrint++];
        }

        while (firstPrint < firstCount)
            mergedArray[k++] = firstArray[firstPrint++];

        while (secondPrint < secondCount)
            mergedArray[k++] = secondArray[secondPrint++];

        for (int m = 0; m < firstCount + secondCount; m++)
        {
            (m != firstCount + secondCount - 1) ? printf("%d-", mergedArray[m]) : printf("%d", mergedArray[m]);
        }
        printf("\n");
    }
    return 0;
}