#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

void remove_duplicates_and_sort(int arr[], int n) {
    qsort(arr, n, sizeof(int), cmp); // 排序
    printf("%d", arr[0]); // 输出第一个数
    
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) { // 如果和前一个数不相同，则输出
            printf(" %d", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T); // 读取测试数据的组数

    while (T--) {
        int n;
        scanf("%d", &n); // 读取每组数据的数量

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]); // 读取每组数据中的数字
        }

        remove_duplicates_and_sort(arr, n); // 去重并排序
    }

    return 0;
}
