#include <stdio.h>
int main()
{
    int num, a1, a2, a3, a4;
    scanf("%d", &num);
    a4 = num % 10;
    a3 = (num / 10) % 10;
    a2 = (num / 100) % 10;
    a1 = (num / 1000) % 10;
    printf("%d%d%d%d", a4, a3, a2, a1);

    return 0;
}