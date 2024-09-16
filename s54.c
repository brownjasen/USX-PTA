#include <stdio.h>
void printNum(int numSmall)
{
    for (int i = 1; i <= numSmall; i++)
    {
        printf("%d", numSmall);
    }
    printf("\n");
}

int main()
{
    int T, m, n;
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d", &m, &n);
        for (int i = m; i <= n; i++)
        {
            printNum(i);
        }
    }

    return 0;
}