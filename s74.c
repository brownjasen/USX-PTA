#include <stdio.h>
#include <string.h>

#define MAX_LEN 31 // 字符串最大长度加1，因为包含了终止符 '\0'

// 函数：判断两个字符串是否可重组相等
int areRearrangeable(char *s, char *t) {
    int count_s[128] = {0}; // ASCII 码范围为 0-127
    int count_t[128] = {0};

    // 统计字符串 s 中每个字符的出现次数
    for (int i = 0; s[i] != '\0'; i++) {
        count_s[(int)s[i]]++;
    }

    // 统计字符串 t 中每个字符的出现次数
    for (int i = 0; t[i] != '\0'; i++) {
        count_t[(int)t[i]]++;
    }

    // 比较两个字符串的字符计数是否相同
    for (int i = 0; i < 128; i++) {
        if (count_s[i] != count_t[i]) {
            return 0; // 不相同，返回 0
        }
    }
    return 1; // 相同，返回 1
}

int main() {
    int T;
    scanf("%d", &T); // 读取测试数据的组数

    char s[MAX_LEN], t[MAX_LEN];
    for (int i = 0; i < T; i++) {
        scanf(" %[^\n]", s); // 读取字符串 s，忽略前导空格
        scanf(" %[^\n]", t); // 读取字符串 t，忽略前导空格

        if (areRearrangeable(s, t)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
