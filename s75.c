#include <stdio.h>
#include <stdlib.h>

// 比较函数，用于qsort排序
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// 二分查找函数
int binary_search(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return mid + 1; // 返回位置，从1开始计数
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0; // 没找到返回0
}

int main() {
    int n, m;
    while (scanf("%d", &n) != EOF) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        // 排序
        qsort(arr, n, sizeof(int), cmp);

        // 输出排序结果
        for (int i = 0; i < n; i++) {
            printf("%d", arr[i]);
            if (i != n - 1) printf(" ");
        }
        printf("\n");

        scanf("%d", &m);
        for (int i = 0; i < m; i++) {
            int query;
            scanf("%d", &query);
            int result = binary_search(arr, n, query);
            printf("%d", result);
            if (i != m - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
