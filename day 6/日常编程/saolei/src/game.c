#include "../inc/game.h"

void game_manu()
{
    printf("*******************************\n");
    printf("*****   1.paly   2.exit   *****\n");
    printf("*******************************\n");
}

int game_chose()
{
    int chose=0;
    printf("请输入:");
    while(chose != 1&&chose != 2)
    {
        scanf("%d",&chose);
        if(chose != 1&&chose != 2)
        {
            game_manu();
            printf("输入错误,请重新输入:");
        }else
        {
            return chose;
        }
    }
}

void init_board(char (*board)[COLS],int row,int col,char set)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            board[i][j]=set;
        }
    }
}

void prin_board(char (*board)[COLS],int row,int col)
{
    for(int j=0;j<col+1;j++)
    {
        if(j==0)
        printf("  ");
        else
        printf("%d ",j);
    }
    printf("\n");
    for(int i=1;i<row+1;i++)
    {
        printf("%d ",i);
        for(int j=1;j<col+1;j++)
        {
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
}

void set_board(char (*board)[COLS],int row,int col)
{
    int x=0,y=0,count=0;
    while(count<COUNT)
    {
        x=rand()%row+1;
        y=rand()%col+1;
        if(board[x][y]=='0')
        {
            board[x][y]='1';
            count++;
        }
    }
}

int count_board(char (*board)[COLS],int x,int y)
{
    return board[x-1][y-1]+board[x-1][y]+board[x-1][y+1]
    +board[x][y-1]+board[x][y+1]+board[x+1][y-1]
    +board[x+1][y]+board[x+1][y+1]-8*'0';
}

void play_board(char (*board)[COLS],char (*show_board)[COLS],int row,int col)
{
    int x=0,y=0,count=0,n=0;
    while(1)
    {
        printf("请输入坐标:\n");
        scanf("%d %d",&x,&y);
        if(show_board[x][y]=='#'&&x>0&&x<row+1&&y>0&&x<col+1)
        {
            if(board[x][y]=='1')
            {
                printf("这里是一颗雷，你失败了\n");
                break;
            }else
            {
                n=count_board(board,x,y);
                show_board[x][y]=n+'0';
                count++;
                if(count == ROW*COL-COUNT)
                {
                    printf("恭喜你赢了\n");
                    prin_board(board,ROW,COL);
                    Sleep(3000);
                    break;
                }
                prin_board(show_board,ROW,COL);
            }
        }else
        {
            prin_board(show_board,ROW,COL);
            printf("输入错误,请重新输入:\n");
        }
    }
}

void game_start()
{
    char board[ROWS][COLS]={'0'},show_board[ROWS][COLS]={'0'};
    srand((unsigned int)time(NULL));
    printf("游戏开始:\n");
    // while(1)
    // {
        init_board(board,ROWS,COLS,'0');
        init_board(show_board,ROWS,COLS,'#');
        set_board(board,ROW,COL);

        prin_board(board,ROW,COL);
        prin_board(show_board,ROW,COL);
        play_board(board,show_board,ROW,COL);
        
    // }
}
