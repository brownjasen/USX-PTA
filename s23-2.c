#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        char s[80], t[80];

        scanf("%s %s", s, t);

        if (strstr(s, t) != NULL)
        {
            printf("Found!\n");
        }
        else
        {
            printf("not Found!\n");
        }
    }

    return 0;
}
