#include <stdio.h>
int main()
{
    int count, num1, num2, result;

    while (1)
    {
        scanf("%d %d", &num1, &num2);
        if (num1 == 0 && num2 == 0)
            break;
        result = num1 + num2;
        printf("%d\n", result);
    }

    return 0;
}