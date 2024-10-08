#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    char str[61];
    scanf("%d", &T);
    getchar();
    while (T--)
    {
        scanf("%s", str);
        int len = strlen(str);
        int is = 1;
        for (int i = 0; i < len / 2; i++)
        {
            if (str[i] != str[len - i - 1])
            {
                is = 0;
                break;
            }
        }
        if (is)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }

    return 0;
}