#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 81  // 最多80位的非负整数，+1表示字符串结束符

// 比较函数，用于排序
int cmp(const void *a, const void *b) {
    // 转换为字符串指针
    char *str1 = *(char **)a;
    char *str2 = *(char **)b;
    
    // 先按长度比较
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2) {
        return len1 - len2;  // 长度短的在前
    }
    
    // 长度相同时按字典序比较
    return strcmp(str1, str2);
}

int main() {
    int N;
    char *numbers[100];  // 存储每组的N个非负整数
    int first = 1;  // 用于判断是否是第一组测试数据
    
    while (1) {
        // 输入整数N
        scanf("%d", &N);
        if (N == 0) break;  // 如果N为0，输入结束
        
        // 输入N个非负整数
        for (int i = 0; i < N; i++) {
            numbers[i] = (char *)malloc(MAX_LEN * sizeof(char));  // 动态分配存储空间
            scanf("%s", numbers[i]);  // 读取每个整数
        }
        
        // 排序
        qsort(numbers, N, sizeof(char *), cmp);
        
        // 输出结果
        if (!first) {
            printf("\n");  // 每组测试数据之间留一个空行
        }
        first = 0;
        
        for (int i = 0; i < N; i++) {
            printf("%s\n", numbers[i]);
            free(numbers[i]);  // 释放动态分配的内存
        }
    }
    
    return 0;
}
