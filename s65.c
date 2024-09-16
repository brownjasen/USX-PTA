#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char input[81];
    while (scanf("%s", input) != EOF)
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
        //sum = sum - atoi(token);
        printf("%d\n", sum);
    }

    return 0;
}