#include "draw.h"
#include"terminal.h"
#include<iostream>
#include"utils.h"
#include"tetromino.h"
namespace dw{




void window(int top, int left, int width, int height, std::string title)
{
    for (size_t r = 0; r < height; r++)
    {
        tc::move_to(top+r,ut::b2c(left));
        for (size_t c= 0; c < width; c++)
        {
                
                if(r==0)
                {
                    if(c==0)
                    {
                        std::cout<<" ┌";
                    }else if(c==width-1)
                    {
                        std::cout<<"┐ ";
                    }
                    else{
                        std::cout<<"──";
                    }

                }else if(r==height-1)
                {
                     if(c==0)

                    {
                        std::cout<<" └";

                    }else if(c==width-1)
                    {
                        std::cout<<"┘ ";
                        
                    }
                    else{
                         std::cout<<"──";
                    }
                    
                }
                else
                {
                     if(c==0)

                    {
                         std::cout<<" │";

                    }else if(c==width-1)
                    {
                         std::cout<<"│";
                    }
                    else{
                         std::cout<<"  ";
                    }

                }
        }
        
    }
    tc::move_to(top,ut::b2c(left)+(width*2-title.length())/2);
        std::cout<<title;
    
}

void tetromino(gm::Tetromino& t, int top, int left)
{
    tc::move_to(top,ut::b2c(left));
    for (size_t i = 0; i < t.size(); i++)
    {
        tc::move_to(top+i,ut::b2c(left));
        for (size_t j = 0; j < t[0].size(); j++)
        {
            if(t[i][j]>0)
            {
                tc::set_back_color((int)gm::tetro_color[t[i][j]]);
                std::cout<<"  ";
            }
            else
            {
                tc::reser_color();
                std::cout<<"  ";
            }
        }
        
    }
    
}
}