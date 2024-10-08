#include "stdio.h"
#include "string.h"

int main() {
    char ch[100];
    int length, i;
    while (scanf("%s", ch) != EOF) {
        length = strlen(ch);
        i = 0;
        while ((i < length / 2) || (length == 1)) {
            if (length % 2 == 1) {
                printf("%d\n", length);
                break;
            }
            if (ch[i] != ch[length - i - 1]) {
                printf("%d\n", length);
                break;
            } else {
                i++;
            }
            if (i == length / 2) {
                length = length / 2;
                i = 0;
            }
        }
        for (int j = 0; j < length; ++j) {
            ch[j] = '\0';
        }

    }
    return 0;
}
