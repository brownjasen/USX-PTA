#include <stdio.h>
int main()
{
    int num, a1, a2, a3, a4, a5;
    scanf("%d", &num);
    a4 = num % 10;
    a3 = (num / 10) % 10;
    a2 = (num / 100) % 10;
    a1 = (num / 1000) % 10;
    a5 = a1 + a2 + a3 + a4;
    printf("%d", a5);

    return 0;
}