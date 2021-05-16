#pragma once

#include <iostream>
#include "Board.hpp"

namespace pandemic
{
    class Player
    {
        protected:
            static const int five = 5;
            // Which city cards the players has
            std::array<bool, num_of_cities> cards;
            Board *board;
            City city;
            // How many cards the player has of each color
            std::array<int, num_of_colors> count_colored_cards;
        public:
            Player(Board &board, City city) : board(&board), city(city)
            {
                for(unsigned long i = 0; i < num_of_cities; i++)
                {
                    cards.at(i) = 0;
                }
                for(unsigned long i = 0; i < num_of_colors; i++)
                {
                    count_colored_cards.at(i) = 0;
                }
            }
            ~Player(){}

            virtual Player& drive(const City destination);
            virtual Player& fly_direct(const City destination);
            virtual Player& fly_charter(const City destination);
            virtual Player& fly_shuttle(const City destination);
            virtual Player& build();
            virtual Player& discover_cure(const Color color);
            virtual Player& treat(const City City);
            Player& take_card(const City city);
            virtual std::string role();
            Player& remove_cards();
    };
}