#pragma once
#include"define.h"
#include"tetromino.h"

namespace gm
{
    class Piece{
        
        public:
            Piece(Tetromino& t,int x0,int y0);
            Piece()=default;
            down();

        private:
            bool test(int x,int y);
            

            Tetromino tetro_set;
            int x,y;

        
    };
}