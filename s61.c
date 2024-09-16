#include <stdio.h>
int main()
{
    int n, numUp, numDown, numMiddle;
    double sum;
    while (scanf("%d", &n) != EOF)
    {
        numUp = 2;
        numDown = 1;
        sum = numUp*1.0 / numDown;
        for (int i = 1; i < n; i++)
        {
            sum = sum + (numDown + numUp) *1.0/ numUp;
            numMiddle = numUp;
            numUp = numDown + numUp;
            numDown = numMiddle;
        }
        printf("%.6f\n", sum);
    }

    return 0;
}

