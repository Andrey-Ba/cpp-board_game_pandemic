#include "Player.hpp"

namespace pandemic
{
    Player& Player::drive(const City destination)
    {
        if(!Board::hasConnection(city, destination))
        {
            throw std::runtime_error("Cannot drive from " + getCityname((unsigned long)(city)) + " to " + getCityname((unsigned long)(destination)));
        }
        city = destination;
        return *this;
    }
    Player& Player::fly_direct(const City destination)
    {
        if(city == destination)
        {
            throw "Cannot fly to itself";
        }
        if(!cards.at((unsigned long)destination))
        {
            throw std::runtime_error("Don't have the proper card");
        }
        city = destination;
        cards.at((unsigned long)destination) = false;
        count_colored_cards.at((unsigned long)Board::getCityColor(destination))--;
        return *this;
    }
    Player& Player::fly_charter(const City destination)
    {
        if(city == destination)
        {
            throw "Cannot fly to itself";
        }
        if(!cards.at((unsigned long)city))
        {
            throw std::runtime_error("Don't have the proper card");
        }
        cards.at((unsigned long)city) = false;
        count_colored_cards.at((unsigned long)Board::getCityColor(city))--;
        city = destination;
        return *this;
    }
    Player& Player::fly_shuttle(const City destination)
    {
        if(city == destination)
        {
            throw "Cannot fly to itself";
        }
        if(!board->hasStation(city))
        {
            throw std::runtime_error("No station");
        }
        if(!board->hasStation(destination))
        {
            throw std::runtime_error("No station");
        }
        city = destination;
        return *this;
    }
    Player& Player::build()
    {
        if(board->hasStation(city))
        {
            return *this;
        }
        if(!cards.at((unsigned long)city))
        {
            throw std::runtime_error("Don't have proper card");
        }
        board->buildStation(city);
        cards.at((unsigned long)city) = false;
        count_colored_cards.at((unsigned long)Board::getCityColor(city))--;
        return *this;
    }
    Player& Player::discover_cure(const Color color)
    {
        if(!board->hasStation(city))
        {
            throw "No station";
        }

        if(count_colored_cards.at((unsigned long)color) < five)
        {
            throw "Not enough cards";
        }
        if(board->cure(color))
        {
            int droped_cards = 0;
            for(unsigned long i = 0; droped_cards < five && i < num_of_colors; i++)
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
    Player& Player::treat(const City city)
    {
        if(this->city != city)
        {
            throw std::runtime_error("Not in correct city");
        }
        if((*board)[city] == 0)
        {
            throw std::runtime_error("Sickness already at 0");
        }
        if(board->isCured(Board::getCityColor(city)))
        {
            (*board)[city] = 0;
        }
        else
        {
            (*board)[city]--;
        }
        return *this;
    }
    Player& Player::take_card(const City city)
    {
        if(!cards.at((unsigned long)city))
        {
            count_colored_cards.at((unsigned long)Board::getCityColor(city))++;
            cards.at((unsigned long)city) = true;
        }
        return *this;
    }
    std::string Player::role()
    {
        return "Player";
    }

    Player& Player::remove_cards()
    {
        for(unsigned long i = 0; i < num_of_cities; i++)
        {
            cards.at(i) = false;
        }
        for(unsigned long i = 0; i < num_of_colors; i++)
        {
            count_colored_cards.at(i) = 0;
        }
        return *this;
    }
}
