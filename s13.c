#include <stdio.h>
int main()
{
    int f;
    float c;
    scanf("%d", &f);
    c = 5.0 * (f - 32.0) / 9.0;
    printf("%.1f", c);
    return 0;
}