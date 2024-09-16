#include <stdio.h>
int main()
{
    int n, a, b, wina, winb;

    while (scanf("%d", &n) != EOF)
    {
        wina = 0;
        winb = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &a, &b);
            if (a > b)
            {
                wina++;
            }
            else
                winb++;
        }

        if (wina > winb)
        {
            printf("Sg");
        }
        else if (wina < winb)
        {
            printf("Gs");
        }
        else
            printf("CONTINUE");
    }

    return 0;
}