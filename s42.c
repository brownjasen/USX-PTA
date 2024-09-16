#include <stdio.h>
#include <math.h>

int main() {
    double e;
    
    // 处理多组测试数据，直到文件结束
    while (scanf("%lf", &e) != EOF) {
        double sum = 0.0;
        double term = 0.5; // 第一项 1/2
        int numerator = 1; // 分子从1开始
        int denominator = 2; // 分母从2开始
        
        // 逐项计算，直到某项小于e
        while (term >= e) {
            sum += term; // 累加符合条件的项
            numerator += 2; // 分子加2
            denominator *= 2; // 分母乘以2
            term = (double)numerator / denominator; // 计算下一项
        }
        
        // 输出结果，保留6位小数
        printf("%.6lf\n", sum);
    }
    
    return 0;
}
