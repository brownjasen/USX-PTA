#include <stdio.h>

int main()
{
    char p[100];
    int male, female, i ;
    float percentM, percentF;

    while (scanf("%s", p) != EOF)
    {
        percentM=0.0;
         percentF=0.0;
         male=0;
         female=0;
         i = 0;
        while (p[i] != '.')
        {
            if (p[i] == 'M' || p[i] == 'm')
            {
                male++;
            }
            else
                female++;
            i++;
        }
        percentF = female*100.0 / (male + female);
        percentM = male*100.0 / (male + female);
        printf("%.1f %.1f", percentM, percentF);
    }

    return 0;
}