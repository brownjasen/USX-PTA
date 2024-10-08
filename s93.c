#include <stdio.h>
#include <string.h>

int main()
{
    char digit[21][20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
    typedef struct EnglishValue
    {
        int value;
        char *English;
    } English;

    English store[21];
    char ch1[20], ch2[20];
    int val1, val2, result;
    char *resultStr;

    for (int i = 0; i < 21; i++)
    {
        store[i].value = i;
        store[i].English = digit[i];
    }
    
    while (scanf("%s %s", ch1, ch2) != EOF)
    {
        // 字符转换成数字
        for (int j = 0; j < 21; j++)
        {
            if (strcmp(store[j].English, ch1) == 0)
            {
                val1 = store[j].value;
            }
            if (strcmp(store[j].English, ch2) == 0)
            {
                val2 = store[j].value;
            }
        }

        // 计算和
        result = val1 + val2;

        // 重新转换成字符串
        for (int k = 0; k < 21; k++)
        {
            if (store[k].value == result)
            {
                resultStr = store[k].English;
            }
        }

        // 打印结果
        printf("%s\n", resultStr);
    }

    return 0;
}