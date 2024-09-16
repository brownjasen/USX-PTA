#include <stdio.h>
#include <stdbool.h>

#define MAXN 1000000

bool is_prime[MAXN + 1];
int prime_index[MAXN + 1]; // 存储每个素数的排位
int prime_count = 0; // 素数个数

// 初始化并使用筛法找到所有的素数
void sieve() {
    for (int i = 2; i <= MAXN; i++) {
        is_prime[i] = true;
    }
    
    for (int i = 2; i * i <= MAXN; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= MAXN; i++) {
        if (is_prime[i]) {
            prime_count++;
            prime_index[i] = prime_count;
        }
    }
}

int main() {
    sieve(); // 找到所有素数并记录其位置
    
    int N;
    while (scanf("%d", &N) != EOF) {
        if (is_prime[N]) {
            printf("%d\n", prime_index[N]);
        } else {
            printf("0\n");
        }
    }

    return 0;
}
