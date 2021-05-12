#pragma once

#include <iostream>
#include "Player.hpp"

namespace pandemic 
{
    class Researcher : public Player
    {
        private:

        public:
            Researcher();
            Researcher(Board board, City city) : Player(board, city){}
            ~Researcher(){}
            Player& discover_cure(const Color color);
            std::string role();
    };
}