#include <stdio.h>
int main()
{
    char c1, c2, c3;
    c1 = getchar();
    c3 = getchar();
    c2 = getchar();
    c1 = c1 + 32;
    c2 = c2 - 32;
    printf("%c,%c", c1, c2);

    return 0;
}