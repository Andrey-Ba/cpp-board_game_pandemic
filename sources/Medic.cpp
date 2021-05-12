#include "Medic.hpp"

namespace pandemic
{
    Player& Medic::treat(const City city)
    {
        if(this->city != city)
        {
            throw std::runtime_error("Not in correct city");
        }
        if((*board)[city] == 0)
        {
            throw std::runtime_error("Sickness already at 0");
        }
        (*board)[city] = 0;
        return *this;
    }

    Player& Medic::drive(const City destination)
    {
        Player::drive(destination);
        if(board->isCured(Board::getCityColor(city)))
        {
            (*board)[city] = 0;
        }
        return *this;
    }

    Player& Medic::fly_direct(const City destination)
    {
        Player::fly_direct(destination);
        if(board->isCured(Board::getCityColor(city)))
        {
            (*board)[city] = 0;
        }
        return *this;
    }
     Player& Medic::fly_charter(const City destination)
     {
         Player::fly_charter(destination);
        if(board->isCured(Board::getCityColor(city)))
        {
            (*board)[city] = 0;
        }
        return *this;
     }
    Player& Medic::fly_shuttle(const City destination)
    {
        Player::fly_shuttle(destination);
        if(board->isCured(Board::getCityColor(city)))
        {
            (*board)[city] = 0;
        }
        return *this;
    }

    std::string Medic::role()
    {
        return "Medic";
    }
}