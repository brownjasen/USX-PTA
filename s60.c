#include <stdio.h>

// 检查一个数是否为素数
int is_prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

// 找到并打印所有素数因子
void print_prime_factors(int number)
{
    int first = 1;  // 用于控制是否输出乘号
    for (int i = 2; i <= number; i++)
    {
        while (number % i == 0 && is_prime(i))
        {
            if (!first)
            {
                printf("*");
            }
            printf("%d", i);
            number /= i;
            first = 0;  // 在输出第一个因子后，标记为非第一次输出
        }
    }
    printf("\n");
}

int main()
{
    int T, num;
    scanf("%d", &T);
    getchar();
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &num);
        print_prime_factors(num);
    }

    return 0;
}
