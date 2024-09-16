#include <stdio.h>
int main()
{
    int n, count, max;

    while (scanf("%d", &n) != EOF)
    {
        count = 0;
        max = 0;
        //printf("n=%d",n);
        for (int i = 1; i <= n; i++)
        {
            if ((i % 7 == 5) && (i % 5 == 3) && (i % 3 == 2))
            {
                count++;
                max = i;
               //printf("%d %d", count, max);
            }
        }
        printf("%d %d", count, max);
    }

    return 0;
}