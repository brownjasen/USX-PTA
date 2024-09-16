#include <stdio.h>

int isNarcissisticNumber(int num) {
    int originalNum = num;
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    
    return sum == originalNum;
}

int main() {
    int m, n;
    
    // 循环处理多组输入直到文件尾
    while (scanf("%d %d", &m, &n) != EOF) {
        int found = 0;

        for (int i = m; i <= n; i++) {
            if (isNarcissisticNumber(i)) {
                printf("%d=%d*%d*%d+%d*%d*%d+%d*%d*%d\n", 
                    i, i/100, i/100, i/100, 
                    (i/10) % 10, (i/10) % 10, (i/10) % 10, 
                    i % 10, i % 10, i % 10);
                found = 1;
            }
        }

        if (!found) {
            printf("none\n");
        }
    }

    return 0;
}
