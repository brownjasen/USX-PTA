#include <stdio.h>
#include <stdbool.h>

// 辅助函数：判断一个数是否为回文数
bool isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

// 寻找比n大的最小回文数
int nextPalindrome(int n) {
    while (1) {
        n++;
        if (isPalindrome(n)) {
            return n;
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);  // 输入测试数据组数

    while (T--) {
        int n;
        scanf("%d", &n);  // 输入每组测试数据的n
        printf("%d\n", nextPalindrome(n));  // 输出比n大的最小回文数
    }

    return 0;
}
