#ifndef _GAME_H_
#define _GAME_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define LOW 3

void game(char (*board)[LOW],int row,int low);
void init_board(char (*board)[LOW],int row,int low);
int game_start();
void prin_board(char (*board)[LOW],int row,int low);
void player_move(char (*board)[LOW],int row,int low);
void cmp_move(char (*board)[LOW],int row,int low);
int winer(char (*board)[LOW],int row,int low);

#endif
