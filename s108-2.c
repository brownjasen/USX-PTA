#include "stdio.h"
#include "stdlib.h"

void inputVal(int (*matrix)[],int row,int col){
    //for (int i = 1; i < row; ++i) {
        printf("%d",(*matrix)[1]);
        printf("hello");
    //}
}

int main() {
    int times, num;
    scanf("%d", &times);
    for (int i = 0; i < times; ++i) {
        scanf("%d", &num);
        int arr[num][num];
        arr[0][1]=556677;
        inputVal(arr,num,num);

    }
    return 0;
}