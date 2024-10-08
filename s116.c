#include <stdio.h>
int main()
{
    int num;
    int number[40];
    while (scanf("%d", &num) != EOF)
    {
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &number[i]);
        }
        for (int j = num - 1; j >= 0; j--)
        {
            if (j == 0)
            {
                printf("%d", number[j]);
                printf("\n");
            }
            else
                printf("%d ", number[j]);
        }
        
    }
    return 0;
}