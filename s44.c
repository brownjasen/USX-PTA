#include <stdio.h>

int main()
{
    int T;
    float price, maxPrice, sum;
    char name[100], maxName[100];
    maxPrice = 0.0;
    sum = 0.0;
    price = 0.0;
    while (scanf("%d", &T) != EOF)
    {
        for (int i = 0; i < T; i++)
        {
            scanf("%s %f", name, &price);
            getchar();
            if (price > maxPrice)
            {
                maxPrice = price;
                sprintf(maxName, "%s", name);
            }
            sum = sum + price;
            //printf("sum=%f\n", sum);
        }

        printf("%s ", maxName);
        printf("%.1f", sum / T);
    }

    return 0;
}