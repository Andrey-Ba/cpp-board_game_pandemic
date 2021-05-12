#include "Virologist.hpp"

namespace pandemic
{
    Player& Virologist::treat(const City city)
    {
        if((*board)[city] == 0)
        {
            throw std::runtime_error("Sickness already at 0");
        }
        if(this->city == city)
        {
            (*board)[city]--;
        }
        else
        {
            if(cards.at((unsigned long)city))
            {
                (*board)[city]--;
                count_colored_cards.at((unsigned long)Board::getCityColor(city))--;
                cards.at((unsigned long)(city)) = false;
            }
            else
            {
                throw std::runtime_error("Don't have proper card");
            }
        }
        return *this;
    }

    std::string Virologist::role()
    {
        return "Virologist";
    }
}