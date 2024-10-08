#include <stdio.h>
int main()
{
    int T, num, a[100];
    int temp;
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &num);
        getchar();
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &a[j]);
            // printf("a=%d\n",a[j]);
        }
        for (int k = 0; k < num; k++)
        {
            for (int p = k + 1; p < num; p++)
            {
                if (a[k] >= a[p])
                {
                    temp = a[k];
                    a[k] = a[p];
                    a[p] = temp;
                }
            }
        }
        printf("%d", a[0]);
        for (int q = 1; q < num; q++)
        {
            if (a[q] != a[q - 1])
            {
                printf(" %d", a[q]);
            }
        }
        printf("\n");
        
    }

    return 0;
}