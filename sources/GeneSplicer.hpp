#pragma once

#include <iostream>
#include "Player.hpp"

namespace pandemic 
{
    class GeneSplicer : public Player
    {
        private:

        public:
            GeneSplicer();
            GeneSplicer(Board board, City city) : Player(board, city){}
            ~GeneSplicer(){}
            Player& discover_cure(const Color color);
            std::string role();
    };
}