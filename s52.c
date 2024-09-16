#include <stdio.h>
#include <math.h>
int main()
{
    int T, a, b, c, s, A;
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        s = (a + b + c) / 2;
        A = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("%d", A);
    }

    return 0;
}