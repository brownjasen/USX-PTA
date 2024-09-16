#include <stdio.h>
#include <string.h>

int main()
{
    int k;
    char s[21];
    scanf("%d", &k);
    fgets(s, sizeof(s), stdin);
    for (int i = 1; i <= k; i++)
    {
        printf("%c", s[i]);
    }

    return 0;
}