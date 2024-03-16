#include "piece.h"

namespace gm{

Peice::Piece(Tetromino &t, int x0, int y0):tetro_set(t),x(x0),y(y0)
{
}

Piece::down()
{
   if(test(x,y-1))
   {
    y--;
   }
}

bool Piece::test(int x, int y)
{


    return false;
}
}
