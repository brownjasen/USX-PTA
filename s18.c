#include <stdio.h>
int main()
{
    int a1, a2, a3, a4, a5;
    float a6;
    scanf("%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5);
    a6 = (a1 + a2 + a3 + a4 + a5) / 5.0;
    printf("%.1f", a6);

    return 0;
}