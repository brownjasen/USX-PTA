#include <stdio.h>

int main() {
    int n, i, min_index, temp;

    // 使用while循环处理多组数据直到文件结束
    while (scanf("%d", &n) != EOF) {
        int arr[n];
        
        // 输入n个整数
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        // 找到最小值及其索引
        min_index = 0;
        for (i = 1; i < n; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }

        // 交换第一个元素与最小值
        if (min_index != 0) {
            temp = arr[0];
            arr[0] = arr[min_index];
            arr[min_index] = temp;
        }

        // 输出结果
        for (i = 0; i < n; i++) {
            if (i == 0)
                printf("%d", arr[i]);
            else
                printf(" %d", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
