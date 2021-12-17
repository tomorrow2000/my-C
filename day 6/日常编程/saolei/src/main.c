#include "../inc/game.h"

int main(int argc,char argv[])
{
    int chose=0;
    while(1)
    {
        game_manu();
        chose=game_chose();
        if(chose == 1)
        {
            game_start();
        }else if(chose == 2)
        {
            break;
        }
    }





    return 0;
}
