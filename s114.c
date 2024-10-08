#include "stdio.h"


int main() {
    int num;
    int length;
    while (scanf("%d", &num) != EOF) {
        length = 0;
        if (num < 0) {
            num = num * (-1);
        }
        if (num == 0) {
            length = 1;
        }
        while (num  != 0) {
            length++;
            num = num / 10;
        }
        printf("%d\n", length);
    }
    return 0;
}