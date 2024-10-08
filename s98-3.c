#include <stdio.h>
#include <string.h>

int containString(char *str, char ch)
{
    int index = 0;
    while (*str)
    {
        if (*str == ch)
        {
            return index; // 字符存在第index位置
        }
        str++;
        index++;
    }
    return -1;
}
void getCharCount(char *p)
{
    int i = 0;
    int index = 0;
    char charArray[80];
    int charCount[80];
    int temp;
    while (*p != '\0')
    {
        temp = containString(charArray, *p);
        if (temp == -1)
        {
            charArray[index] = *p;
            charCount[index] = 1;
            index++;
        }
        else
        {
            charCount[temp]++;
        }
        p++;
    }

    // 打印结果
    for (int k = 0; k < index; k++)
    {
        printf("%c %d\n", charArray[k], charCount[k]);
    }
}

int main()
{
    char str[80];
    while (scanf("%s", str) != EOF)
    {
        getCharCount(str);
    }

    return 0;
}