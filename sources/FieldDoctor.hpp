#pragma once

#include <iostream>
#include "Player.hpp"

namespace pandemic 
{
    class FieldDoctor : public Player
    {
        private:

        public:
            FieldDoctor();
            FieldDoctor(Board board, City city) : Player(board, city){}
            ~FieldDoctor(){}
            Player& treat(const City city);
            std::string role();
    };
}