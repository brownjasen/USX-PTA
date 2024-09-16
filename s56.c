#include <stdio.h>
int main()
{
    int n, a;

    while (scanf("%d %d", &n, &a) != EOF)
    {
        int sum = 0;
        int term = 0;
        for (int i = 0; i < n; i++)
        {
            term = term * 10 + a;
            sum = sum + term;
        }
        printf("%d", sum);
    }

    return 0;
}