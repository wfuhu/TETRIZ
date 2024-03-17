#pragma once

#include <iostream>
#include<thread>
#include<string>
#include<termio.h>
#include<map>
#include<functional>
#include<vector>
#include<memory>
#include<cassert>
#include<ranges>
//c++11 
//控制时间  时间单位
#include<chrono>
using namespace std::chrono_literals;


#define KEY_Q 'q'
#define KEY_W 'w'
#define KEY_S 's'
#define KEY_A 'a'
#define KEY_D 'd'

using Tetromino=std::array<std::array<std::pair<int,int>,4>,4>;
using Matrix=std::vector<std::vector<int>>;
using std::ranges::views::iota;