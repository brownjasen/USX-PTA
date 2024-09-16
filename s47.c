#include <stdio.h>
#include <math.h>
char convert(int a, char b)
{
    // printf("a =%d\n", a);
    char result;
    result = a + b;

    return result;
}

int main()
{
    int n, num, headData;
    char pin[5], temp;

    while (scanf("%d %s", &num, pin) != EOF)
    {
        for (int i = 1; i <= 5; i++)
        {
            headData = num / (10000 / pow(10, i - 1));
            num = num - headData * pow(10, 5 - i);
            temp = convert(headData, pin[i - 1]);
            printf("%c", temp);
        }
    }

    return 0;
}