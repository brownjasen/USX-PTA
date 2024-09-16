#include <stdio.h>
int main()
{
    int a, b, shang, yushu;
    scanf("%d %d", &a, &b);
    yushu = a % b;
    shang = (a - yushu) / b;

    printf("%d %d", shang, yushu);
    return 0;
}