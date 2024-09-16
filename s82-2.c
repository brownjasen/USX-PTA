#include <stdio.h>
#include <stdlib.h>

// 比较函数，用于qsort排序
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    
    // 循环读取测试数据组
    while (scanf("%d", &n) != EOF) {
        int numbers[100]; // 假设每组最多100个整数，根据题目1 < n < 100
        // 读取n个整数
        for (int i = 0; i < n; i++) {
            scanf("%d", &numbers[i]);
        }
        
        // 对整数数组进行排序
        qsort(numbers, n, sizeof(int), compare);
        
        // 输出排序后的整数，每个数字后面跟一个空格
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                printf(" ");
            }
            printf("%d", numbers[i]);
        }
        printf("\n"); // 输出完一组数据后换行
    }
    
    return 0;
}
