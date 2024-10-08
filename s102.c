#include <stdio.h>
#include <string.h>

float average(int student, int course)
{
    int score[student][course];
    float average[student];
    int sort[student];
    int index = 0;

    // 输入每个学生每门课的成绩
    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < course; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }

    // 求出每个学生的平均成绩
    for (int m = 0; m < student; m++)
    {
        average[m] = 0;
        int temp = 0;
        for (int n = 0; n < course; n++)
        {
            temp += score[m][n];
        }
        average[m] = temp * 1.0 / course;
    }

    // 成绩排序，从大到小
    float tempScore;
    int pass = 1;
    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < course; j++)
        {
            if (score[i][j] < 0)
            {
                pass = 0;
                break;
            }
        }

        // 全及格
        if (pass)
        {
            for (int k = 0; k < student; i++)
            {
                if ((average[k] > average[i]))
                {
                    tempScore = average[i];
                    average[i] = average[k];
                    average[k] = tempScore;
                    sort[index] = k;
                }
            }
        }
    }

    // 输出结果
    if (index == 0)
    {
        printf("NULL");
    }
    else
    {
        for (int i = 0; i < index; i++)
        {
            (i == 0) ? printf("%d", sort[i]) : printf(" %d", sort[i]);
        }
    }

    return 0;
}

int main()
{
    int T, n;
    int student, course;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &student, &course);
        average(student, course);
    }

    return 0;
}