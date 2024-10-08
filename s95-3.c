#include <stdio.h>
#include <string.h>
#include<ctype.h>

void str_to_lower(char *str) {
    while (*str) {
        if (isupper(*str)) { // 检查字符是否为大写
            *str = tolower(*str); // 转换为小写
        }
        str++; // 移动到下一个字符
    }
}

void processStr(int isFirst, char *str)
{
    int length = strlen(str);
    char destChar[5];
    if (length > 4)
    {
        strncpy(destChar, str, 4);
        destChar[4]='\0';
        //strlwr(destChar);
        str_to_lower(destChar);
        (isFirst == 1) ? printf("%s.", destChar) : printf(" %s.", destChar);
    }
    else
    {
        destChar[length]='\0';
        //strlwr(str);
        str_to_lower(str);
        (isFirst == 1) ? printf("%s", str) : printf(" %s", str);
    }
    
}

int main()
{
    int T, isFirst;
    char str[85];
    char delimiters[] = " ";
    char *token;
    scanf("%d", &T);
    getchar();
    for (int i = 0; i < T; i++)
    {
        isFirst = 1;
        scanf("%[^\n]", str);
        getchar();
        //printf("%s\n",str);
        token = strtok(str, delimiters);
        while (token != NULL)
        {
            //printf("%s-",token);
            processStr(isFirst, token);
            isFirst = 0;
            token = strtok(NULL, delimiters);
        }
        printf("\n");
    }

    return 0;
}