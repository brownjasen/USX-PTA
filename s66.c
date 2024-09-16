#include <stdio.h>
int main()
{
    int n, sum, num;
    int count;
    sum=0;
    count=0;
    do
    {
        scanf("%d", &n);
        count = n;
        if (count == 0)
        {
            break;
        }
        else
        {
            while (count != 0)
            {
                scanf("%d", &num);
                count--;
                sum = sum + num;
            }
            printf("%d\n", sum);
        }

    } while (n != 0);

    return 0;
}