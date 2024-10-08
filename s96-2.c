#include <stdio.h>
#include <string.h>

int main()
{
    int Times, length, count,number;
    char str[80];
    char delimiters[] = "  ";
    char *token;
    scanf("%d", &Times);
    getchar();
    for (int i = 0; i < Times; i++)
    {
        count = 0;
        scanf("%d",&number);
        getchar();
        scanf("%[^\n]", str);
        token = strtok(str, delimiters);    //拆分英文
        while (token != NULL)
        {
            length = strlen(token);
            if (length == number)
            {
                count++;
            }
            token = strtok(NULL, delimiters);
        }

        printf("%d\n", count);
    }

    return 0;
}