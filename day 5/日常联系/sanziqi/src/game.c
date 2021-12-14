#include "../inc/game.h"

int game_start()
{
    int a=0;
    while(1)
    {
        printf("***************************************\n");
        printf("*****   1.pley       2.exit       *****\n");
        printf("***************************************\n");
        printf("请输入:\n");
        scanf("%d",&a);
        if(a==1||a==2)
        {
            if(a==2)
            return a;
            else
            break;
        }
        printf("输入不合法,请重新输入。\n");
    }
}

void init_board(char (*board)[LOW],int row,int low)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<low;j++)
        {
            board[i][j] = ' ';
        }
    }
}
void prin_board(char (*board)[LOW],int row,int low)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<low;j++)
        {
            printf(" %c ",board[i][j]);
            if(j<low-1)
                printf("|");
        }
        printf("\n");
        if(i<row-1)
            printf("---|---|---\n");
    }
}

void player_move(char (*board)[LOW],int row,int low)
{
    printf("玩家移动:\n");
    int x,y;
    while(1)
    {
        scanf("%d %d",&x,&y);
        if(0<x&&x<(row+1)&&0<y&&y<(low+1))
        {
            {
                if(board[x-1][y-1] == ' ')
                {
                    board[x-1][y-1] = '*';
                    break;
                }else
                {
                    printf("这个地方已经有子了，请重新选择:\n");
                }
            }
        }else
        {
            printf("输入错误，请重新选择:\n");
        }
    }
}

void cmp_move(char (*board)[LOW],int row,int low)
{
    int x=rand()%row,y=rand()%low;
    printf("电脑移动:\n");
    while(1)
        {
            if(board[x][y] == ' ')
            {
                board[x][y] = '#';
                break;
            }else
            {
                x=rand()%row;
                y=rand()%low;
            }
        }

}

int winer(char (*board)[LOW],int row,int low)
{
    int flag = 0,count=0;
    for(int i=0;i<row;i++)
    {
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
        {
            if(board[i][1]=='*')
            printf("player win!\n");
            else
            printf("cmp win\n");
            flag = 1;
        }
    }
    for(int j=0;j<low;j++)
    {
        if(board[0][j]==board[1][j]&&board[1][j]==board[2][j]&&board[1][j]!=' ')
        {
            if(board[1][j]=='*')
            printf("player win!\n");
            else
            printf("cmp win\n");
            flag = 1;
        }
    }
    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
    {
        if(board[1][1]=='*')
        printf("player win!\n");
        else
        printf("cmp win\n");
        flag =1;
    }
    if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[1][1]!=' ')
    {
        if(board[1][1]=='*')
        printf("player win!\n");
        else
        printf("cmp win\n");
        flag = 1;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(board[i][j] == ' ')
            count++;
        }
    }
    if(count==0&&flag==0)
    {
        printf("平局\n");
        flag=1;
    }

    return flag;
}

void game(char (*board)[LOW],int row,int low)
{
    int flag = -1;
    srand((unsigned int)time(NULL));
    while(1)
    {
        flag=game_start();
        if(flag == 2)
        break;
        init_board(board,row,low);
        printf("游戏开始:\n");
        while(1)
        {
            player_move(board,row,low);
            prin_board(board,row,low);
            flag=winer(board,row,low);
            if(flag ==1)
            break;
        
            cmp_move(board,row,low);
            prin_board(board,row,low);
            flag=winer(board,row,low);
            if(flag ==1)
            break;
        }
    }
}
