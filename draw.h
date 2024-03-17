#pragma once
#include<string>
#include"define.h"
#include"tetromino.h"
namespace dw{

void window(int top,int left,int width,int height,std::string title);

void frame(Matrix& frame,int top ,int left);
}