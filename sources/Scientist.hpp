#pragma once

#include <iostream>
#include "Player.hpp"

namespace pandemic 
{
    class Scientist : public Player
    {
        private:
            int n;
        public:
            Scientist();
            Scientist(Board board, City city, int n) : Player(board, city){this->n = n;};
            ~Scientist(){}
            Player& discover_cure(const Color color);
            std::string role();
    };
}