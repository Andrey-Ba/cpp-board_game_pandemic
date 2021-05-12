#include "Dispatcher.hpp"

namespace pandemic
{
    Player& Dispatcher::fly_direct(const City destination)
    {
        if(city == destination)
        {
            throw "Cannot fly to itself";
        }
        if(board->hasStation(city))
        {
            city = destination;
        }
        else
        {
            Player::fly_direct(destination);
        }
        return *this;
    }

    std::string Dispatcher::role()
    {
        return "Dispatcher";
    }
}