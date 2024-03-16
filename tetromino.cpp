#include"define.h"
#include"tetromino.h"
#include"color.h"
namespace gm{
Tetromino I{
    {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,1,1,1,1},
        {0,0,0,0,0},
        {0,0,0,0,0}
    }
};
Tetromino J{
    {
        {2,0,0},
        {2,2,2},
        {0,0,0}
    }
};

Tetromino L{
    {
        {0,0,3},
        {3,3,3},
        {0,0,0}
    }
};

Tetromino O{
    {
        {0,4,4},
        {0,4,4},
        {0,0,0}
    }
};
Tetromino S{
    {
        {0,5,5},
        {5,5,0},
        {0,0,0}
    }
};
Tetromino T{
    {
        {0,6,0},
        {6,6,6},
        {0,0,0}
    }
};

Tetromino Z{
    {
        {7,7,0},
        {0,7,7},
        {0,0,0}
    }
};

std::map<int,Color> tetro_color{
    {1,Color::Cyan},
    {2,Color::Blue},
    {3,Color::Oranger},
    {4,Color::Yellow},
    {5,Color::Green},
    {6,Color::Purple},
    {7,Color::Red}
};


Tetromino rotate(Tetromino &t)
{
    Tetromino result(t.size(),std::vector<int>(t.size(),0));
    for (size_t i = 0; i < t.size(); i++)
    {
            for (size_t j = 0; j < t[0].size(); j++)
            {
                if(t[i][j]>0)
                result[j][t.size()-i-1]=t[i][j];
                
               
            }
            
    }
    

    return std::move(result);
}


}