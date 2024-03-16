
#include"terminal.h"
#include"utils.h"
#include"draw.h"
#include"define.h"
#include"control.h"
#include"game.h"


void init()
{
    tc::hide_cursor();
    gm::start_listener();
    gm::init();
}


void loop()
{
    int i=1;
    while (gm::running)
    {
       
        tc::clean_screen();
        dw::window(1,1,9,6,"Hold");
        dw::window(1,10,12,22,"Tetriz");
        dw::window(7,1,9,16,"Status");
        dw::window(19,22,8,4,"info");
        dw::window(1,22,8,18,"next");
        
        tc::move_to(10,4);
        std::cout<<"FPS:"<<ut::fps();

        // tc::move_to(gm::row,ut::b2c(gm::col));
        // dw::tetromino(gm::cur,gm::row,gm::col);
        tc::reser_color();
        std::cout<<std::flush;
        std::this_thread::sleep_for(500ms);
    }

}

void exit()
{
    tc::show_cursor();
    tc::reser_color();
    tc::clean_screen();
    tc::move_to(1,1);
    tc::set_fore_color(9);
    std::cout<<"bye"<<std::endl;
}




int  main()
{


    init();
    loop();
    exit();
  

    return 0;
}