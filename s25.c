#include <stdio.h>
#include <string.h>

int main()
{
    int m, l;
    char s[80], s1[80];
    int start, s1Start, endPosition;
    int k = 0;
    while (scanf("%d %d %[^\n]", &m, &l, s) != EOF)
    {
        getchar();

        if (strlen(s) > l)
        {
            start = m - 1;
            s1Start = 0;
            endPosition = 0;
            while ((s[start] != '\0') && (s1Start < l))
            {
                s1[s1Start] = s[start];
                s1Start++;
                start++;
                endPosition++;
            }

            s1[endPosition] = '\0';
            printf("%s\n\n", s1);
        }
    }

    return 0;
}
