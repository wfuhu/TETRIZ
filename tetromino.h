#pragma once
#include"define.h"
#include"color.h"
namespace gm
{

    extern std::map<int,Color> tetro_color;
    Tetromino rotate(Tetromino &t);

    
  

   bool get_bit(int t,int i,int j);
    extern Tetromino I,J,L,O,S,T,Z;

}