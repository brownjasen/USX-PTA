#include <stdio.h>
int main()
{
    int a1, a2, a3, a4, a5, total;
    scanf("%d %d %d", &a1, &a2, &a3);
    a4 = a1 * a3;
    a5 = a2 * a3;
    total = a4 + a5;
    printf("%d", total);

    return 0;
}