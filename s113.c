#include "stdio.h"
#include "string.h"

int main() {
    int times, length;
    char str[80];
    char delimiters[] = " ";
    char *token;
    scanf("%d", &times);
    getchar();
    for (int i = 0; i < times; ++i) {
        scanf("%[^\n]", str);
        getchar();
        token = strtok(str, delimiters);    //拆分英文
        while (token != NULL) {
            length = strlen(token);
            for (int j = length - 1; j >= 0; --j) {
                printf("%c", token[j]);
            }

            token = strtok(NULL, delimiters);
            if(token != NULL){
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}



