#include <stdio.h>
#include <math.h>
int main()
{
    float length, s;

    while (scanf("%f", &length) != EOF)
    {
        s = sqrt(3) * length * length / 4.0;
        printf("%.2f\n", s);
    }

    return 0;
}