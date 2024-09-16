#include <stdio.h>
int main()
{
    int T, a[100], num;
    int j ;
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        j=0;
        scanf("%d", &num);
        while (num != 0)
        {
            a[j] = num % 10;
            num = num / 10;
            j++;
        }
        printf("%d,", j);

        for (int p = j - 1; p >= 0; p--)
        {
            printf("%d,", a[p]);
        }
        for (int k = 0; k < j; k++)
        {
            if (k == j - 1)
            {
                printf("%d", a[k]);
            }
            else
                printf("%d,", a[k]);
        }
        printf("\n");

    }
}