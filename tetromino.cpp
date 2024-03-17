#include"define.h"
#include"tetromino.h"
#include"color.h"
namespace gm{


std::map<int,Color> tetro_color{
    {1,Color::Cyan},
    {2,Color::Blue},
    {3,Color::Oranger},
    {4,Color::Yellow},
    {5,Color::Green},
    {6,Color::Purple},
    {7,Color::Red}
};


bool get_bit(int t, int i, int j)
{

    return t>>i*4+j&0x1==1;
}
Tetromino I
{
    {
        {{{'I',(int)Color::Cyan}, {-1, 0}, {1, 0}, {2, 0}}},
        {{{'I',(int)Color::Cyan}, {0, 1}, {0, -1}, {0, -2}}},
        {{{'I',(int)Color::Cyan}, {-2, 0}, {-1, 0}, {1, 0}}},
        {{{'I',(int)Color::Cyan}, {0, 2}, {0, 1}, {0, -1}}},
    }
};
Tetromino J
{
    {
        {{{'J',(int)Color::Blue}, {-1,1}, {-1,0}, {1,0}}},
        {{{'J',(int)Color::Blue}, {1,1}, {0,-1}, {0,-1}}},
        {{{'J',(int)Color::Blue}, {-1,0},{1,0}, {1,1}}},
        {{{'J',(int)Color::Blue}, {0,1}, {-1,-1}, {0,-1}}},
    }
};

Tetromino L
{
    {
        {{{'L',(int)Color::Oranger}, {-1, 0}, {1, 0}, {1,1}}},
        {{{'L',(int)Color::Oranger}, {0, 1}, {0, -1}, {1, -1}}},
        {{{'L',(int)Color::Oranger}, {-1, -1}, {-1, 0}, {1, 0}}},
        {{{'L',(int)Color::Oranger}, {-1, 1}, {0, 1}, {0, -1}}},
    }
};
Tetromino O
{
    {
        {{{'O',(int)Color::Yellow}, {0, 1}, {1, 1}, {1, 0}}},
        {{{'O',(int)Color::Yellow}, {0,  -1}, {1, 0}, {1, -1}}},
        {{{'O',(int)Color::Yellow}, {-1, -1}, {-1, 0}, {0, -1}}},
        {{{'O',(int)Color::Yellow}, {-1, 1}, {-1, 0}, {0, 1}}},
    }
};
Tetromino S
{
    {
        {{{'S',(int)Color::Green}, {-1, 0}, {0, 1}, {1, 1}}},
        {{{'S',(int)Color::Green}, {0, 1}, {1, 0}, {1, -1}}},
        {{{'S',(int)Color::Green}, {-1, -1}, {0, -1}, {1, 0}}},
        {{{'S',(int)Color::Green}, {-1, 1}, {-1, 0}, {0, -1}}},
    }
};
Tetromino T
{
    {
        {{{'T',(int)Color::Purple}, {-1, 0}, {0, 1}, {1, 0}}},
        {{{'T',(int)Color::Purple}, {0, 1}, {1, 0}, {0, -1}}},
        {{{'T',(int)Color::Purple}, {-1, 0}, {1, 0}, {0, -1}}},
        {{{'T',(int)Color::Purple}, {-1, 0}, {0, 1}, {0, -1}}},
    }
};
Tetromino Z
{
    {
        {{{'Z',(int)Color::Red}, {-1, 1}, {0, 1}, {1, 0}}},
        {{{'Z',(int)Color::Red}, {1, 1}, {1, 0}, {0, -1}}},
        {{{'Z',(int)Color::Red}, {-1, 0}, {0, -1}, {1, -1}}},
        {{{'Z',(int)Color::Red}, {-1, -1}, {-1, 0}, {0, -1}}},
    }
};

}