#include <stdio.h>
#include "../inc/game.h"

int main(int argc,char argv[])
{
    int row = ROW,low = LOW;
    char board[ROW][LOW]={"0"};
    game(board,row,low);

    return 0;
}
