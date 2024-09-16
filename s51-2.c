#include <stdio.h>
#include <time.h>

// 减去1天的函数
void subtract_one_day(char* date_str) {
    struct tm date = {0};
    // 将字符串日期解析为struct tm格式
    sscanf(date_str, "%d-%d-%d", &date.tm_year, &date.tm_mon, &date.tm_mday);
    // struct tm中的年份从1900开始，所以需要减去1900
    date.tm_year -= 1900;
    // struct tm中的月份从0开始，所以需要减去1
    date.tm_mon -= 1;

    // 将日期减去1天
    date.tm_mday -= 1;

    // 将修改后的时间转换为时间戳，以处理日期减去1天的操作
    mktime(&date);

    // 将处理后的日期格式化输出
    printf("%04d-%02d-%02d\n", date.tm_year + 1900, date.tm_mon + 1, date.tm_mday);
}

int main() {
    int T;
    scanf("%d", &T);  // 读取测试组数

    for (int i = 0; i < T; i++) {
        char date_str[11];  // 日期字符串格式为 "yyyy-mm-dd" 长度为10，加上'\0'为11
        scanf("%s", date_str);

        subtract_one_day(date_str);
    }

    return 0;
}
