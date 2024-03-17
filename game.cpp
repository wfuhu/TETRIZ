#include "game.h"
#include"tetromino.h"
#include"piece.h"
#include"utils.h"
 namespace gm{
bool running;
// int row,col;
// Tetromino cur;
Tetromino cur;
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
    c_piece.set_playfield(std::make_shared<Matrix>(playfield));

}
Piece pick()
{
    return Piece(J,4,20,0);
}

void process()
{
    render();
    if(ut::timer(duration)){
        c_piece.down();
    }
}

void render()
{
    frame=playfield;
    auto[x,y]=c_piece.get_xy();
    for(auto i:iota(0,4))
    {
        auto[dx,dy]=c_piece.get_mino(i);
        frame[x+dx][y+dy]=c_piece.get_color();
    }

    while (c_piece.test(x,--y));
        y++;
    for(auto i:iota(0,4))
    {
        auto[dx,dy]=c_piece.get_mino(i);
        if(frame[x+dx][y+dy]==0)
        frame[x+dx][y+dy]=0-c_piece.get_color();
    }

    
}

void rotate()
{
    c_piece.rotate();
}

void left()
{
 c_piece.left();
}

void right()
{
 c_piece.right();
}

void down()
{
 c_piece.down();
}

void quit()
{
    running=false;
}

 }
