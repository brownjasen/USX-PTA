#include <stdio.h>
int main()
{
    int T, count, sum, num;
    sum = 0;
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &count);
        while (count != 0)
        {
            scanf("%d", &num);
            count--;
            sum = sum + num;
        }
        printf("%d\n", sum);
        sum = 0;
        if (i != T)
        {
            printf("\n");
        }
    }

    return 0;
}