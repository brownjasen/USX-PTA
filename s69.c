#include <stdio.h>

int strLen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str[100];
    int length = 0;
    char max;
    while (scanf("%s", str) != EOF)
    {
        length = strLen(str);
        max = str[0];
        for (int i = 1; i < length; i++)
        {
            if (max < str[i])
            {
                max = str[i];
            }
        }

        for (int j = 0; j < length; j++)
        {
            if (max == str[j])
            {
                printf("%c", str[j]);
                printf("(max)");
            }
            else
                printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}