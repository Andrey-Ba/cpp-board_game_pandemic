#pragma once

#include <iostream>
#include "Player.hpp"

namespace pandemic 
{
    class OperationsExpert : public Player
    {
        private:

        public:
            OperationsExpert(Board board, City city) : Player(board, city){}
            ~OperationsExpert(){}
            Player& build();
            std::string role();
    };
}