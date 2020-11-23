#include <stdio.h>
#include "basic1.h"

int main() {
    UIBoard();

    for (int i = 0; i < 3;++i){
        for (int j = 0;j < 3;j++){
            printf("%d ",board[i][j]);
        }
        printf("\n");
    }

    return 0;
}
