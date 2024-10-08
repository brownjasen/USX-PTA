#include "stdio.h"

int main() {
    int row, column, min, max, temp, tag = 0;
    int minPosition, maxPosition;
    int num[400];
    while (scanf("%d %d", &row, &column) != EOF)
    {
        maxPosition=1;
        minPosition=1;
        for (int i = 1; i <= row * column; ++i) {
            scanf("%d", &num[i]);
        }
        min = num[1];
        max = num[1];
        for (int i = 1; i <= row * column; ++i) {
            if (num[i] < min) {
                min = num[i];
                minPosition = i;
            }
            if (num[i] > max) {
                max = num[i];
                maxPosition = i;
            }
        }

        temp = num[minPosition];
        num[minPosition] = num[maxPosition];
        num[maxPosition] = temp;

        for (int i = 1; i <= row * column; ++i) {
            if (tag == 0) {
                printf("%d", num[i]);
                tag = 1;
            } else {
                printf(" %d", num[i]);
            }
           if (i % column == 0) {
                printf("\n");
                tag = 0;
            }
        }
    }
    return 0;
}