#include "utils.h"
#include"define.h"
int ut::fps()
{
    //推导本地时间
static auto start=std::chrono::steady_clock::now();
auto end=start;
static int frame_count=0;
static int fps=0;

end=std::chrono::steady_clock::now();
        frame_count++;
        if(end-start>1s)
        {
            fps=frame_count;
            frame_count=0;
             start=end;
        }


    return fps;
}

bool ut::timer(std::chrono::microseconds sec)
{
    static auto start=std::chrono::steady_clock::now();
    auto end=std::chrono::steady_clock::now();

    if(end-start>sec)
    {
        start=end;
        return true;
    }

    return false;
}
