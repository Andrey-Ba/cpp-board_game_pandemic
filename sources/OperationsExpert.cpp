#include "OperationsExpert.hpp"

namespace pandemic{
    Player& OperationsExpert::build()
    {
        if(!board->hasStation(city))
        {
            board->buildStation(city);
        }
        return *this;
    }

    std::string OperationsExpert::role()
    {
        return "OperationsExpert";
    }
}