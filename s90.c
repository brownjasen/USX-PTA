#include <stdio.h>
int main()
{
    int T, m, n;
    int countA = 0, countB = 0;
    int a[100], b[100], c[200];
    scanf("%d", &T);
    getchar();
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }

    for (int k = 0; k < m + n; k++)
    {
        if (a[countA] > b[countB])
        {
            c[k] = b[countB];
            countB++;
        }
        if (a[countA] == b[countB])
        {
            c[k] = b[countB];
            countB++;
        }
        if (a[countA] < b[countB])
        {
            c[k] = a[countA];
            countA++;
        }
    }
    for (int p = 0; p < m + n; p++)
    {
        printf("%d ", c[p]);
    }
    
    return 0;
}