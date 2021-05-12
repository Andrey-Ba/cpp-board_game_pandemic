#include "Scientist.hpp"

namespace pandemic
{
        Player& Scientist::discover_cure(const Color color)
    {
        if(!board->hasStation(city))
        {
            throw "No station";
        }
        if(count_colored_cards.at((unsigned long)color) < n)
        {
            throw "Not enough cards, you have only " + std::to_string(count_colored_cards.at((unsigned long)color)) +" " + getColorname((unsigned long)color) + " cards out of " + std::to_string(n);
        }
        if(board->cure(color))
        {
            int droped_cards = 0;
            for(unsigned long i = 0; droped_cards < n && i < num_of_cities; i++)
            {
                if(Board::getCityColor((City)i) == color && cards.at(i))
                {
                    count_colored_cards.at((unsigned long)color)--;
                    cards.at(i) = false;
                    droped_cards++;
                }
            }
        }
        return *this;
    }

    std::string Scientist::role()
    {
        return "Scientist";
    }
}