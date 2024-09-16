#include <stdio.h>
int main()
{
    float r, C, S;
    scanf("%f", &r);
    C = 2.0 * r * 3.14159;
    S = 3.14159 * r * r;
    printf("%.2f %.2f", C, S);
    return 0;
}