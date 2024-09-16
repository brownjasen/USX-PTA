#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int T;
    char input[81];  // 字符串的最大长度为80，因此分配81个字符的数组（包括终止符'\0'）

    // 读取测试数据组数
    scanf("%d", &T);
    getchar();  // 消费掉换行符

    for (int i = 0; i < T; i++) {
        // 读取一行包含整数的字符串
        fgets(input, 81, stdin);

        int sum = 0, count = 0;
        char *token = strtok(input, " ");
        
        while (token != NULL) {
            sum += atoi(token);  // 将字符串转换为整数并累加到sum
            count++;
            token = strtok(NULL, " ");  // 继续获取下一个整数
        }

        // 计算平均值并保留一位小数
        double average = (double)sum / count;
        printf("%.1f\n", average);
    }

    return 0;
}
