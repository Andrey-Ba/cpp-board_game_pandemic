#pragma once

#include <iostream>
#include <map>
#include "City.hpp"
#include "Color.hpp"

namespace pandemic
{
    class Board
    {
    private:
        bool original;
        // How many sick people in each city.
        std::array<int, num_of_cities> *sickness;
        // By order, which colors are cured.
        std::array<bool, num_of_colors> *cures;
        // By city, which city has a station.
        std::array<bool, num_of_cities> *stations;
    public:

        Board(){
            original = true;
            sickness = new std::array<int, num_of_cities>;
            cures = new std::array<bool, num_of_colors>;
            stations = new std::array<bool, num_of_cities>;
            for(unsigned long i = 0; i < num_of_cities; i++)
                {
                    sickness->at(i) = 0;
                    stations->at(i) = 0;
                }
                for(unsigned long i = 0; i < num_of_colors; i++)
                {
                    cures->at(i) = 0;
                }
        }
        Board(const Board& b)
        {
            sickness = b.sickness;
            cures = b.cures;
            stations = b.stations;
            original = false;
        }
        ~Board(){
            if(original)
            {
            delete sickness;
            delete cures;
            delete stations;
            }
        }

        static bool hasConnection(const City city1, const City city2);
        static Color getCityColor(const City city);
        bool hasStation(const City city);
        void buildStation(const City city);
        bool cure(const Color color);
        bool isCured(const Color color);

        bool is_clean();
        void remove_cures();
        void remove_stations();

        int& operator[](City city);
        friend std::ostream& operator<<(std::ostream& os, const Board board);
    };
    
}