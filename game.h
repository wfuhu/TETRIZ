#pragma once
#include"tetromino.h"
#include"piece.h"
namespace gm{

extern bool running;

extern Piece c_piece;


extern Matrix playfield;
extern std::chrono::microseconds duration;


extern Matrix frame;

void quit();
void init();

Piece pick();

void render();

void process();
void rotate();
void left();
void right();
void down();

// extern int row,col;
// extern Tetromino cur;
// extern int cur_index;

}