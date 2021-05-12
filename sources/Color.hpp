#pragma once

#include <iostream>

namespace pandemic
{
    static const u_int num_of_colors = 4;
    
    enum class Color
    {
        Blue,
        Yellow,
        Black,
        Red
    };

    static std::string getColorname(const unsigned long color_num)
    {
        std::string colors[num_of_colors] = {"Blue","Yellow","Black","Red"};
        return colors[color_num];
    }
}