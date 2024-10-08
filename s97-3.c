#include <stdio.h>
#include <string.h>

void processData(int number)
{
    int data[number];
    int newData[number];
    int temp;
    int newCount;
    // 输入数据
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &data[i]);
    }

    // 从小到大排序
    for (int j = 0; j < number; j++)
    {
        for (int k = j + 1; k < number; k++)
        {
            if (data[j] > data[k])
            {
                temp = data[j];
                data[j] = data[k];
                data[k] = temp;
            }
        }
    }

    // 去掉重复
    newCount = 0;
    newData[newCount] = data[0];
    for (int i = 1; i < number; i++)
    {
        if (newData[newCount] != data[i])
        {
            newData[++newCount] = data[i];
        }
    }

    // 打印输出结果
    printf("%d", newData[0]);
    for (int i = 1; i <= newCount; i++)
    {
        printf(" %d", newData[i]);
    }
}

int main()
{
    int T, number;
    scanf("%d", &T);
    getchar();
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &number);
        getchar();
        processData(number);
    }

    return 0;
}