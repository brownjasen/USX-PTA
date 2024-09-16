#include <stdio.h>

int data(int n)
{
    int result=0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result = result + i;
        }
    }

    return result;
}

int main()
{
    int n, sum;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        else
        {
            sum = data(n);
            printf("%d\n", sum);

        }
    }

    return 0;
}