#include <stdio.h>
#include <string.h>

int main() {
    char str[81];  // 存储每个输入的字符串，长度不超过80
    int freq[128]; // 统计每个字符的出现次数，ASCII码范围为0-127
    int first_case = 1; // 用于判断是否是第一组测试数据

    // 循环处理每组输入
    while (scanf("%s", str) != EOF) {
        // 初始化字符频率数组
        memset(freq, 0, sizeof(freq));

        // 统计字符出现次数
        for (int i = 0; str[i] != '\0'; i++) {
            freq[(int)str[i]]++;
        }

        // 如果不是第一组数据，先输出一个空行
        if (!first_case) {
            printf("\n");
        }
        first_case = 0;

        // 按照ASCII码顺序输出每个字符及其出现次数
        for (int i = 0; i < 128; i++) {
            if (freq[i] > 0) {
                printf("%c %d\n", i, freq[i]);
            }
        }
    }

    return 0;
}
