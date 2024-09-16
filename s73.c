#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 80

int main() {
    char input[MAX_LENGTH + 1];  // 定义一个字符数组来存储输入的字符串
    int count[10];  // 用来统计每个数字字符的出现次数（'0'-'9'）

    while (scanf("%s", input) != EOF) {  // 读取输入直到文件尾
        memset(count, 0, sizeof(count));  // 初始化计数数组为0

    for (int  i = 0; i < 10; i++)
    {
        count[i]=0;
    }
    
        // 遍历输入字符串，并统计每个数字字符的出现次数
        for (int i = 0; i < strlen(input); i++) {
            if (input[i] >= '0' && input[i] <= '9') {
                count[input[i] - '0']++;
            }
        }

        // 按照字符ASCII码升序输出结果
        for (int i = 0; i < 10; i++) {
            if (count[i] > 0) {
                printf("%d %d\n", i, count[i]);
            }
        }
        printf("\n");  // 每组测试数据输出后空一行
    }

    return 0;
}
