#include <stdio.h>

int main()
{
    int T, a, b;
    int index;
    int isFirst;
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        index = 0;
        isFirst = 0;
        scanf("%d %d", &a, &b);
        for (int j = a; j <= b; j++)
        {
            if (j % 3 == 2 && j % 7 == 1)
            {
                if (isFirst == 0)
                {
                    printf("%d", j);
                    isFirst = 1;
                }
                else
                    printf(" %d", j);
                index = 1;
            }
        }
        if (index == 0)
        {
            printf("none");
        }
        printf("\n");
    }

    return 0;
}