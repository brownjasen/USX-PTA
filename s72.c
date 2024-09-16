#include <stdio.h>
#include<math.h>
int main()
{
    int T,count,total,num,sum,a[100];
    float average,s,summer;
    scanf("%d", &T);
    getchar();
    for (int i = 1; i <= T; i++)
    {
        sum=0;
        scanf("%d", &count);
        total=count;
        while (count != 0)
        {
            scanf("%d", &num);
            a[count]=num;

            sum = sum + num;
            count--;

        }
        average=sum*1.0/total;
        summer=0;
        //printf("average=%f",average);
        for (int j = 1; j <= total; j++)
        {
            summer=summer+(a[j]-average)*(a[j]-average);
            
        }
        summer=summer/total;
        summer=sqrt (summer);
        printf("%.5f",summer);

    }

    return 0;
}