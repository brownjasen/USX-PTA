#include <stdio.h>
int main()
{
    int T, electricity;
    float money;
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        money = 0.0;
        scanf("%d", &electricity);
        if (electricity <= 150)
        {
            money = electricity * 0.4463;
        }
        else if (electricity > 150 && electricity <= 400)
        {
            money = 150 * 0.4463 + (electricity - 150) * 0.4663;
        }
        else
        {
            money = 150 * 0.4463 + 250 * 0.4663 + (electricity - 400) * 0.5663;
        }

        printf("%.2f\n", money);
    }

    return 0;
}