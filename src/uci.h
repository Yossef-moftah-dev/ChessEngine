#pragma once

#include<iostream>
#include<sstream>
#include<thread>
#include<mutex>

class Uci
{
public:
    static inline Fen StartingFen = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";

    using InType = std::function<std::string()>;
    using OutType =  std::function<void(std::string)>;
}