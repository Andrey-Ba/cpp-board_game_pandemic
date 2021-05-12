#include "GeneSplicer.hpp"

namespace pandemic
{
    Player& GeneSplicer::discover_cure(const Color color)
    {
        if(!board->hasStation(city))
        {
            throw "Not in a station";
        }
        if(count_colored_cards.at((unsigned long)Color::Blue) + count_colored_cards.at((unsigned long)Color::Black)
        + count_colored_cards.at((unsigned long)Color::Yellow) + count_colored_cards.at((unsigned long)Color::Red) < five)
        {
            throw "Not enough cards";
        }
        if(board->cure(color))
        {
            int droped_cards = 0;
            for(unsigned long i = 0; droped_cards < five && i < num_of_cities; i++)
            {
                if(cards.at(i))
                {
                    cards.at(i) = false;
                    count_colored_cards.at((unsigned long)Board::getCityColor((City)i))--;
                    droped_cards++;
                }
            }
        }
        return *this;
    }

    std::string GeneSplicer::role()
    {
        return "GeneSplicer";
    }
}