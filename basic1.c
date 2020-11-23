//
// Created by 1708cjy on 2020/11/23.
//

#include "basic1.h"
#include <stdlib.h>
#include <time.h>

//随机生成棋盘
void UIBoard(){
    int times = 0;
    srand(time(0));

    for (int i = 0;i < 3;i++){
        for (int j = 0;j < 3;j++,times++){
            board[i][j] = rand() % 9;
            //判断是否有重复
            for (int z = 0;z < times;z++){
                if (board[i][j] == *(*board + z)){
                    board[i][j] = rand() % 9;
                    z = -1;
                }
            }
        }
    }
}