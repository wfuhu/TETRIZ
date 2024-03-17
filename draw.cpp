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
    
};



void frame(Matrix &frame, int top, int left){
    int row,col;
    for (size_t x = 0; x < 10; ++x)
    {
        for (size_t y = 0; y < 20; ++y)
        {
            row=top+20-y-1;
            col=left+x;
            tc::move_to(row,ut::b2c(col));
            if(frame[x][y]>0)
            {
                tc::reser_color();
                tc::set_back_color(frame[x][y]);
                std::cout<<"  ";
            }else if(frame[x][y]<0)
            {
                tc::reser_color();
                tc::set_fore_color(0-frame[x][y]);
                std::cout<<"\u25e3\u25e5";
                
            }else
            {
                tc::reser_color();
                std::cout<<"\u30FB";
            }
        }
        
    }
    

}
}