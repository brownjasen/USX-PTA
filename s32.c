#include <stdio.h>
int main()
{
    int T, i, count;
    char a[80];
    scanf("%d", &T);
    getchar();
    for (int j = 0; j < T; j++)
    {
        i = 0;
        count = 0;
        scanf("%s", a);
        while (a[i] != '\0')
        {
            i++;
            if (a[i] >= 48 && a[i] <= 57)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}