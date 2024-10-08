#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    int *score;
    int total;
} STUDENT;

// 输入
void inputScore(int number, int classes, STUDENT *std) {
    for (int i = 0; i < number; ++i) {
        std[i].score = (int *)malloc(classes * sizeof(int));
        std[i].total = 0; // 重置总分
        for (int j = 0; j < classes; ++j) {
            scanf("%d", &std[i].score[j]);
            std[i].total += std[i].score[j]; // 计算总分
        }
    }
}

// 排名
void sortClass(STUDENT *std, int number) {
    STUDENT temp;
    for (int i = 0; i < number; ++i) {
        for (int j = i + 1; j < number; ++j) {
            if (std[i].total < std[j].total) {
                temp = std[i];
                std[i] = std[j];
                std[j] = temp;
            }
        }
    }
}

// 打印
void printScore(STUDENT *std, int classes, int rank) {
    for (int i = 0; i < classes; ++i) {
        if (i == 0)
            printf("%d", std[rank - 1].score[i]);
        else
            printf(" %d", std[rank - 1].score[i]);
    }
    printf("\n");
}

int main() {
    int T, number, classes, rank;
    scanf("%d", &T);

    for (int i = 0; i < T; ++i) {
        scanf("%d %d %d", &number, &classes, &rank);
        STUDENT *std = (STUDENT *)malloc(number * sizeof(STUDENT));
        inputScore(number, classes, std);

        sortClass(std, number);

        printScore(std, classes, rank);

        // 释放内存
        for (int j = 0; j < number; ++j) {
            free(std[j].score);
        }
        free(std);
    }
    return 0;
}
