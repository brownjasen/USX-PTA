#include <stdio.h>

int countLength(int number)
{
    int count = 0;
    do
    {
        count++;
        number /= 10;
    } while (number);
    return count;
}

void inputSort(int num)
{
    long number[num];
    int length[num];
    long tempValue, tempLength;
    // 输入数值
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &number[i]);
    }

    // 计算长度
    for (int j = 0; j < num; j++)
    {
        length[j] = countLength(number[j]);
    }

    // 按长度从小到大排序
    for (int k = 0; k < num; k++)
    {
        for (int m = k + 1; m < num; m++)
        {
            if (length[k] > length[m])
            {
                tempLength = length[k];
                length[k] = length[m];
                length[m] = tempLength;

                tempValue = number[k];
                number[k] = number[m];
                number[m] = tempValue;
            }
        }
    }

    // 遇到相同长度，则按小的在前排列
    for (int i = 0; i < num; i++)
    {
        for (int j = i; j < num; j++)
        {
            if (length[i] == length[j])
            {
                if (number[i] > number[j])
                {
                    tempValue = number[i];
                    number[i] = number[j];
                    number[j] = tempValue;
                }
            }
        }
    }

    for (int p = 0; p < num; p++)
    {
        printf("%d\n", number[p]);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    while (num != 0)
    {
        inputSort(num);
        printf("\n");

        scanf("%d", &num);
    }

    return 0;
}