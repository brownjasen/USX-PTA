#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a; // 从大到小排序
}

int main() {
    int T; // 测试组数
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);

        int tian[n], qi[n];

        // 读入田忌的马匹速度
        for (int i = 0; i < n; i++) {
            scanf("%d", &tian[i]);
        }

        // 读入齐王的马匹速度
        for (int i = 0; i < n; i++) {
            scanf("%d", &qi[i]);
        }

        // 对两组马的速度从大到小排序
        qsort(tian, n, sizeof(int), compare);
        qsort(qi, n, sizeof(int), compare);

        int win = 0; // 记录田忌胜的场数
        int lose = 0; // 记录田忌输的场数
        int leftTian = 0, rightTian = n - 1; // 田忌的左右指针
        int leftQi = 0, rightQi = n - 1; // 齐王的左右指针

        // 贪心策略：尽量赢，实在赢不了就尽量输给最快的
        while (leftTian <= rightTian) {
            if (tian[leftTian] > qi[leftQi]) {
                // 田忌的最快马比齐王的最快马快
                win++;
                leftTian++;
                leftQi++;
            } else if (tian[rightTian] > qi[rightQi]) {
                // 田忌的最慢马能赢齐王的最慢马
                win++;
                rightTian--;
                rightQi--;
            } else {
                // 田忌的最慢马也无法赢齐王的最快马，尽量减少损失
                lose++;
                rightTian--;
                leftQi++;
            }
        }

        // 每场赌注200两黄金，赢的场数减去输的场数即为最终胜场数
        printf("%d\n", (win - lose) * 200);
    }

    return 0;
}
