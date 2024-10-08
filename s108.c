#include "stdio.h"
#include "stdlib.h"

void inputVal(int **matrix, int num) {
    int value = 1;
    for (int i = 1; i <= 2 * num - 1; i++) {
        if (i <= num) {
            matrix[i][i] = value;
            printf("%d",matrix[i][i]);
            value++;
        }

    }
}


int main() {
    int times, num;
    scanf("%d", &times);
    for (int i = 0; i < times; ++i) {
        scanf("%d", &num);
        int **arr = (int **) malloc(num * sizeof(int *));
        for (int j = 0; j < num; j++) {
            arr[i] = (int *) malloc(num * sizeof(int));
        }
        inputVal(arr, num);

        for (int k = 0; k < num; k++) {
            free(arr[k]);
        }
        free(arr);

    }
    return 0;

}