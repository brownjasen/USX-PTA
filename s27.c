#include <stdio.h>
int main()
{
    int T, year, leap;
    scanf("%d", &T);
    getchar();
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &year);
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)

                    leap = 1;
                else
                    leap = 0;
            }
            else
                leap = 1;
        }
        else
            leap = 0;
        if (leap)

            printf("YES\n");
        else
            printf("NO");
    }
    return 0;
}