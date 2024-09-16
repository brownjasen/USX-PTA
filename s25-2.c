#include <stdio.h>
#include <string.h>

int main()
{
    int m, l;
    char s[101];
    while (scanf("%d %d", &m, &l) != EOF)
    {
        scanf(" %[^\n]", s);
        int len = strlen(s);
        if (m - 1 + l > len)
        {
            l = len - (m - 1);
        }
        for (int i = 0; i < l; i++)
        {
            printf("%c", s[m - 1 + i]);
        }
        printf("\n");
    }

    return 0;
}
