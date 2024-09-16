#include <stdio.h>
#include <string.h>

char toUpperCase(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 32; // 将小写字母转换为大写字母
    }
    return c; // 如果不是小写字母，则返回原字符
}

int main()
{
    char str[100];
    int k;
    while (scanf("%[^\n]", str) != EOF)
    {
        getchar();
        printf("%c", toUpperCase(str[0]));
        k = 1;
        while (str[k] != '\0')
        {
            if (str[k - 1] == ' ')
                printf("%c", toUpperCase(str[k]));
            else
                printf("%c", str[k]);
            k++;
        }
        printf("\n");
    }

    return 0;
}
