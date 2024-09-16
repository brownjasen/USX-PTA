#include <stdio.h>
int main()
{
    int score;
    while (scanf("%d", &score) != EOF)
    {
        if (score >= 90 && score <= 100)
        {
            printf("A\n");
            continue;
        }
        if (score >= 80 && score <= 89)
        {
            printf("B\n");
            continue;
        }
        if (score >= 70 && score <= 79)
        {
            printf("C\n");
            continue;
        }
        if (score >= 60 && score <= 69)
        {
            printf("D\n");
            continue;
        }
        if (score >= 0 && score <= 59)
        {
            printf("E\n");
            continue;
        }
        else
        {
            printf("error!\n");
            continue;
        }
    }

    return 0;
}