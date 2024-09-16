#include <stdio.h>
#include <stdbool.h>

#define MAXN 1000000

int isPrime(int number)
{
    // 0, 1 和负数不是素数
    if (number <= 1)
    {
        return 0;
    }
    // 2 是最小的素数
    if (number == 2)
    {
        return 1;
    } // 排除所有偶数
    if (number % 2 == 0)
    {
        return 0;
    }
    // 检查从 3 到 sqrt(number) 的所有奇数因子
    for (int i = 3; i * i <= number; i += 2)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int N;
    int isFirst;
    while (scanf("%d", &N) != EOF)
    {
        for (int i = 2; i <= N; i++)
        {
            isFirst = i - 2;
            if (isPrime(i))
            {
                if (isFirst == 0)
                {
                    printf("%d", i);
                }
                else

                    printf(" %d", i);
            }
        }
        printf("\n");
    }

    return 0;
}
