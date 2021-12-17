#ifndef _GAME_H_
#define _GAME_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ROW 5
#define COL 5
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 1

void game_manu();
int game_chose();
void game_start();
void init_board(char (*board)[COLS],int row,int col,char set);
void prin_board(char (*board)[COLS],int row,int col);
void set_board(char (*board)[COLS],int row,int col);
void set_cycle(char (*board)[COLS],char (*show_board)[COLS],int x,int y);
int count_board(char (*board)[COLS],int x,int y);
void play_board(char (*board)[COLS],char (*show_board)[COLS],int row,int col);

#endif
