#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if (n <= 1)
    {
        return 0; // 不是素数
    }
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0; // 不是素数
        }
    }
    return 1;
}

int main()
{
    int num;
    int value;
    int count;
    while (scanf("%d", &num) != EOF)
    {
        
        value = isPrime(num);
        if (value == 0)
        {
            printf("0\n");
        }
        else
        {
            count=0;
            for (int i = 2; i <= num; i++)
            {
                
                if (isPrime(i) == 1)
                {
                    count++;
                }
            }
            printf("%d\n", count);
        }
    }

    return 0;
}