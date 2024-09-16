#include <stdio.h>
int main()
{
    int count, num1, num2, result;
    // scanf("%d", &count);
    for (int i = 1; i <= 3; i++)
    {
        scanf("%d %d", &num1, &num2);
        result = num1 + num2;
        printf("%d\n", result);
        if (i != 3)
        {
            printf("\n");
        }
    }
    return 0;
}