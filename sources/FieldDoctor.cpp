#include "FieldDoctor.hpp"

namespace pandemic
{
    Player& FieldDoctor::treat(const City city)
    {
        if((*board)[city] == 0)
        {
            throw "Sickness already at 0";
        }
        if(Board::hasConnection(this->city, city) || this->city == city)
        {
            (*board)[city]--;
        }
        else{
            throw "City is not connected";
        }
        return *this;
    }
    
    std::string FieldDoctor::role()
    {
        return "FieldDoctor";
    }
}