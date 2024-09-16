#include <stdio.h>
#include <math.h>
int main()
{
    int T, n, count;
    int index;
    int numBefore, numAfter;
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        count = 1;
        index = 1;
        scanf("%d", &n);
        while (1)
        {
            n++;
            while (n / 10 != 0)
            {
                count++;
                n = n / 10;
            }

            printf("count=%d",count);
            for (int j = 1; j <= count / 2; j++)
            {
                numBefore = n / pow(10, count - j);
                numAfter = (n % (int)pow(10, j)) / pow(10, j - 1);
                if (numAfter != numBefore)
                {
                    index = 0;
                    break;
                }
            }
            if (index == 1)
            {
                printf("%d", n);
                break;
            }
        }
    }

    return 0;
}