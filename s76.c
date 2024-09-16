#include <stdio.h>
int main()
{
    int T, n;
    int success;
     int num[50][50];
    scanf("%d", &T);
    getchar();

    for (int i = 1; i <= T; i++)
    {
        success = 1;
        scanf("%d", &n);
        //printf("n = %d",n);
       
        // input matrix data
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf("%d", &num[j][k]);
            }
        }

        // for (int i1 = 0; i1 < n; i1++)
        // {
        //     for (int j1 = 0; j1 < n; j1++)
        //     {
        //         printf("i1=%d,j1=%d num=%d\n", i1, j1, num[i1][j1]);
        //     }
        // }

        // compare data
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                if (num[i][j] != num[i][n - j - 1])
                {
                    printf("no");
                    success = 0;
                    break;
                }
            }
        }
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (num[i][j] != num[n - i - 1][j])
                {
                    printf("no");
                    success = 0;
                    break;
                }
            }
        }
        if (success)
        {
            printf("yes\n");
        }
    }

    return 0;
}