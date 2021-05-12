#pragma once

#include <iostream>
#include "Player.hpp"

namespace pandemic 
{
    class Virologist : public Player
    {
        private:

        public:
            Virologist();
            Virologist(Board board, City city) : Player(board, city){};
            ~Virologist(){}
            Player& treat(const City city);
            std::string role();
    };
}