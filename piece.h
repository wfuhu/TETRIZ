#pragma once
#include"define.h"
#include"tetromino.h"
namespace gm
{
    class Piece{
        
        public:
            Piece(Tetromino& t,int x0,int y0,int index);
            Piece()=default;
            void down();
            void left();
            void right();
            void rotate();
            void set_playfield(std::shared_ptr<Matrix> sp);
            std::pair<int,int> get_mino(int i);
            std::pair<int,int> get_xy();
            int get_color();
            bool test(int x,int y);
        private:
            void move(int dx,int dy);
            
            Tetromino tetro_set;
            int index;
            int x,y;
            std::shared_ptr<Matrix> sp_playfield;

        
    };
}