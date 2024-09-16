#include <stdio.h>

void processData(int n, int x)
{
    int data[n];

    // 输入
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    // 打印
    for (int j = 0; j < n; j++)
    {
        if (x > data[j])
        {
            printf("%d ", data[j]);
        }
        else
        {
            printf("%d %d ", x, data[j]);
        }
    }
}

int main()
{
    int n, x;
    int number;
    while (scanf("%d %d", &n, &x) != EOF)
    {
        processData(n, x);
    }

    return 0;
}