#pragma once

#include <iostream>
#include "Player.hpp"

namespace pandemic 
{
    class Medic : public Player
    {
        private:

        public:
            Medic();
            Medic(Board board, City city) : Player(board, city){}
            ~Medic(){}
            Player& drive(const City destination);
            Player& fly_direct(const City destination);
            Player& fly_charter(const City destination);
            Player& fly_shuttle(const City destination);
            Player& treat(const City City);
            std::string role();
    };
}