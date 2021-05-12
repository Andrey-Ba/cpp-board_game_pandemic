#pragma once

#include <iostream>
#include "Player.hpp"

namespace pandemic 
{
    class Dispatcher : public Player
    {
        private:

        public:
            Dispatcher();
            Dispatcher(Board board, City city) : Player(board, city){}
            ~Dispatcher(){}
            Player& fly_direct(const City destination);
            std::string role();
    };
}