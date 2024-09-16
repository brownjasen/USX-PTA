#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int T;
    char input[81];
    scanf("%d", &T);
    getchar();

    for (int i = 0; i < T; i++)
    {
        fgets(input, 81, stdin);

        int sum = 0;
        char *token = strtok(input, " ");
        while (token != NULL)
        {
            sum += atoi(token);
            token = strtok(NULL, " ");
        }
        token = strtok(input, " ");
        sum = sum - atoi(token);
        printf("%d\n", sum);
    }

    return 0;
}