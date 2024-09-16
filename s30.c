#include <stdio.h>
int main()
{
    float a;

    while (scanf("%f", &a) != EOF)
    {
        if (a >= 0)
        {
            printf("%.2f", a);
        }
        else
        {
            a = a * (-1.0);
            printf("%.2f", a);
        }
    }

    return 0;
}