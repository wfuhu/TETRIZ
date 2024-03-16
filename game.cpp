#include "game.h"
#include"tetromino.h"
#include"piece.h"
#include"utils.h"
 namespace gm{
bool running;
// int row,col;
// Tetromino cur;
Piece c_piece;
Matrix playfield;
std::chrono::microseconds duration;
Matrix frame;
void init()
{
    running=true;
    c_piece=pick();
    playfield=Matrix(10,std::vector<int>(22,0));
    duration=500ms;
    frame=playfield;
}
Piece pick()
{
    return Piece(J,4,20);
}

void process()
{
    if(timer(500ms)){
        c_piece.down();
    }
}

void rotate()
{

}

void left()
{

}

void right()
{

}

void down()
{

}

void quit()
{
    running=false;
}

 }
