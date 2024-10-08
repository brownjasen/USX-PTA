#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

//输入
void inputVal(int **matrix, int num) {
    int value = 1;
    int row, col;
    for (int i = 1; i <= 2 * num - 1; i++) {
        if (i <= num) {     //上三角
            row = 1;
            col = num - i + 1;
        } else {            //下三角
            row = i - num + 1;
            col = 1;
        }

        if (i <= num) {     //上三角
            while (col <= num) {
                matrix[row - 1][col - 1] = value;
                value++;
                col++;
                row++;
            }
        } else {            //下三角
            while (col <= 2 * num - i) {
                matrix[row - 1][col - 1] = value;
                value++;
                col++;
                row++;
            }
        }
    }
}

//打印
void printMatrix(int **matrix, int num) {
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < num; ++j) {
            if (matrix[i][j] < 10) {
                printf("    %d", matrix[i][j]);
            } else if (matrix[i][j] >= 10 && matrix[i][j] <= 99) {
                printf("   %d", matrix[i][j]);
            } else {
                printf("  %d", matrix[i][j]);
            }

        }
        printf("\n");
    }
}

int main() {
    int times, num;
    scanf("%d", &times);
    for (int i = 0; i < times; ++i) {
        scanf("%d", &num);
        int **arr = (int **) malloc(num * sizeof(int *));
        for (int j = 0; j < num; j++) {
            arr[j] = (int *) malloc(num * sizeof(int));
        }

        //输入
        inputVal(arr, num);

        //打印
        printMatrix(arr, num);

        //释放空间
        for (int k = 0; k < num; k++) {
            free(arr[k]);
        }
        free(arr);
    }
    return 0;
}