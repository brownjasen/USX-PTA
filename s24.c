#include <stdio.h>
#include <string.h>
int main()
{
    int m, l;
    char s[80], s1[80];
    for (int j = 0; j < 2; j++)
    {
        scanf("%d %d", &m, &l);
        getchar();
        fgets(s, sizeof(s), stdin);
        for (int i = 0; i < l; i++)
        {
            s1[i] = s[m - 1 + i];
            printf("%c",s1[i]);            
        }
        if (j==0){
             printf("\n\n");
        }
       
    }

    return 0;
}