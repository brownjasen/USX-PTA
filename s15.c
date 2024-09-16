#include <stdio.h>
int main()
{
    float num1, num2, y1, y2;
    int z1, z2;
    scanf("%f %f", &num1, &num2);
    z1 = num1 / 1;
    z2 = num2 / 1;
    y1 = num1 - z1;
    y2 = num2 - z2;
    printf("%.2f %.2f", z2 + y1, z1 + y2);

    return 0;
}