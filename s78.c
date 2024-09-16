#include <stdio.h>

int main()
{
    int num;
    char x;
    int y;
    int count;
    char position[2];
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        count = 0;
        scanf("%s", position);
        x = position[0];
        y = position[1]-'0';

        //printf("x=%c,y=%d\n",x,y);
        if ((x + 1 <= 'h') && (y + 2 <= 8))
        {
            count++;
        }
        if ((x + 1 <= 'h') && (y - 2 >= 1))
        {
            count++;
        }

        if ((x + 2 <= 'h') && (y + 1 <= 8))
        {
            count++;
        }
        if ((x + 2 <= 'h') && (y - 1 >= 1))
        {
            count++;
        }

        if ((x - 1 >= 'a') && (y + 2 <= 8))
        {
            count++;
        }
        if ((x - 1 >= 'a') && (y - 2 >= 1))
        {
            count++;
        }

        if ((x - 2 >= 'a') && (y + 1 <= 8))
        {
            count++;
        }
        if ((x - 2 >= 'a') && (y - 1 >= 1))
        {
            count++;
        }

        printf("%d\n", count);
    }

    return 0;
}