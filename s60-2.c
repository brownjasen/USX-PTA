#include <stdio.h>
#include <stdbool.h>

#define MAXN 1000000

// 使用埃拉托色尼筛法生成素数表
void sieve(bool is_prime[], int primes[], int *prime_count) {
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
    *prime_count = 0;
    for (int i = 2; i <= MAXN; i++) {
        if (is_prime[i]) {
            primes[(*prime_count)++] = i;
        }
    }
}

// 分解函数
void decompose(int n, int primes[], int prime_count) {
    bool first = true;
    for (int i = 0; i < prime_count && primes[i] * primes[i] <= n; i++) {
        while (n % primes[i] == 0) {
            if (!first) {
                printf("*");
            }
            printf("%d", primes[i]);
            n /= primes[i];
            first = false;
        }
    }
    if (n > 1) {  // 如果剩余的n本身是素数
        if (!first) {
            printf("*");
        }
        printf("%d", n);
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);

    bool is_prime[MAXN + 1];
    int primes[MAXN / 10], prime_count;

    sieve(is_prime, primes, &prime_count);

    while (T--) {
        int n;
        scanf("%d", &n);
        decompose(n, primes, prime_count);
    }

    return 0;
}
