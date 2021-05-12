#include "Researcher.hpp"

namespace pandemic
{
    Player& Researcher::discover_cure(const Color color)
    {
        if(count_colored_cards.at((unsigned long)color) < five)
        {
            throw "Not enough cards";
        }
        if(board->cure(color))
        {
            count_colored_cards.at((unsigned long)color) -= five;
            int droped_cards = 0;
            for(unsigned long i = 0; droped_cards < five && i < num_of_cities; i++)
            {
                if(Board::getCityColor((City)i) == color && cards.at(i))
                {
                    cards.at(i) = false;
                    droped_cards++;
                }
            }
        }
        return *this;
    }

    std::string Researcher::role()
    {
        return "Researcher";
    }
}