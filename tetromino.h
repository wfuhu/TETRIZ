#pragma once
#include"define.h"
#include"color.h"
namespace gm
{
    using Tetromino=std::vector<std::vector<int>>;
    extern Tetromino I,J,L,O,S,T,Z;
    extern std::map<int,Color> tetro_color;
    Tetromino rotate(Tetromino &t);
}