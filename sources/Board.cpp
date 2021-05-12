#include "Board.hpp"

using namespace std;

namespace pandemic
{
    Color Board::getCityColor(const City city)
    {
        switch (city)
        {
        case City::Algiers: 
        case City::Baghdad: 
        case City::Cairo: 
        case City::Chennai: 
        case City::Delhi: 
        case City::Istanbul: 
        case City::Karachi: 
        case City::Kolkata: 
        case City::Moscow: 
        case City::Mumbai: 
        case City::Riyadh: 
        case City::Tehran: 
            return Color::Black;

        case City::Atlanta: 
        case City::Chicago: 
        case City::Essen: 
        case City::London: 
        case City::Madrid: 
        case City::Milan: 
        case City::Montreal: 
        case City::NewYork: 
        case City::Paris: 
        case City::SanFrancisco: 
        case City::StPetersburg: 
        case City::Washington:
            return Color::Blue; 

        case City::Bangkok: 
        case City::Beijing: 
        case City::HoChiMinhCity: 
        case City::HongKong: 
        case City::Jakarta: 
        case City::Manila: 
        case City::Osaka: 
        case City::Seoul: 
        case City::Shanghai: 
        case City::Sydney: 
        case City::Taipei: 
        case City::Tokyo: 
            return Color::Red;

        case City::Bogota: 
        case City::BuenosAires: 
        case City::Johannesburg: 
        case City::Khartoum: 
        case City::Kinshasa: 
        case City::Lagos: 
        case City::Lima: 
        case City::LosAngeles: 
        case City::MexicoCity: 
        case City::Miami: 
        case City::Santiago: 
        case City::SaoPaulo: 
            return Color::Yellow;
        }
    }

    bool Board::hasConnection(const City city1, const City city2)
    {
        switch (city1)
        {
        case City::Algiers: 
            return city2 == City::Madrid || city2 == City::Paris || city2 == City::Istanbul || city2 == City::Cairo;
        case City::Atlanta: 
            return city2 == City::Chicago || city2 == City::Miami || city2 == City::Washington;
        case City::Baghdad: 
            return city2 == City::Tehran || city2 == City::Istanbul || city2 == City::Cairo || city2 == City::Riyadh || city2 == City::Karachi;
        case City::Bangkok: 
            return city2 == City::Kolkata || city2 == City::Chennai || city2 == City::Jakarta || city2 == City::HoChiMinhCity || city2 == City::HongKong;
        case City::Beijing: 
            return city2 == City::Shanghai || city2 == City::Seoul;
        case City::Bogota: 
            return city2 == City::MexicoCity || city2 == City::Lima || city2 == City::Miami || city2 == City::SaoPaulo || city2 == City::BuenosAires;
        case City::BuenosAires: 
            return city2 == City::Bogota || city2 == City::SaoPaulo;
        case City::Cairo: 
            return city2 == City::Algiers || city2 == City::Istanbul || city2 == City::Baghdad || city2 == City::Khartoum || city2 == City::Riyadh;
        case City::Chennai: 
            return city2 == City::Mumbai || city2 == City::Delhi || city2 == City::Kolkata || city2 == City::Bangkok || city2 == City::Jakarta;
        case City::Chicago: 
            return city2 == City::SanFrancisco || city2 == City::LosAngeles || city2 == City::MexicoCity || city2 == City::Atlanta || city2 == City::Montreal;
        case City::Delhi: 
            return city2 == City::Karachi || city2 == City::Tehran || city2 == City::Mumbai || city2 == City::Chennai || city2 == City::Kolkata;
        case City::Essen: 
            return city2 == City::London || city2 == City::Paris || city2 == City::Milan || city2 == City::StPetersburg;
        case City::HoChiMinhCity: 
            return city2 == City::Jakarta || city2 == City::Bangkok || city2 == City::HongKong || city2 == City::Manila;
        case City::HongKong: 
            return city2 == City::Bangkok || city2 == City::Kolkata || city2 == City::HoChiMinhCity || city2 == City::Shanghai || city2 == City::Manila || city2 == City::Taipei;
        case City::Istanbul: 
            return city2 == City::Milan || city2 == City::Algiers || city2 == City::StPetersburg || city2 == City::Cairo || city2 == City::Baghdad || city2 == City::Moscow;
        case City::Jakarta: 
            return city2 == City::Chennai || city2 == City::Bangkok || city2 == City::HoChiMinhCity || city2 == City::Sydney;
        case City::Johannesburg: 
            return city2 == City::Kinshasa || city2 == City::Khartoum;
        case City::Karachi: 
            return city2 == City::Tehran || city2 == City::Baghdad || city2 == City::Riyadh || city2 == City::Mumbai || city2 == City::Delhi;
        case City::Khartoum: 
            return city2 == City::Cairo || city2 == City::Lagos || city2 == City::Kinshasa || city2 == City::Johannesburg;
        case City::Kinshasa: 
            return city2 == City::Lagos || city2 == City::Khartoum || city2 == City::Johannesburg;
        case City::Kolkata: 
            return city2 == City::Delhi || city2 == City::Chennai || city2 == City::Bangkok || city2 == City::HongKong;
        case City::Lagos: 
            return city2 == City::SaoPaulo || city2 == City::Khartoum || city2 == City::Kinshasa;
        case City::Lima: 
            return city2 == City::MexicoCity || city2 == City::Bogota || city2 == City::Santiago;
        case City::London: 
            return city2 == City::NewYork || city2 == City::Madrid || city2 == City::Essen || city2 == City::Paris;
        case City::LosAngeles: 
            return city2 == City::SanFrancisco || city2 == City::Chicago || city2 == City::MexicoCity || city2 == City::Sydney;
        case City::Madrid: 
            return city2 == City::London || city2 == City::NewYork || city2 == City::Paris || city2 == City::SaoPaulo || city2 == City::Algiers;
        case City::Manila: 
            return city2 == City::Taipei || city2 == City::SanFrancisco || city2 == City::HoChiMinhCity || city2 == City::Sydney || city2 == City::HongKong;
        case City::MexicoCity: 
            return city2 == City::LosAngeles || city2 == City::Chicago || city2 == City::Miami || city2 == City::Lima || city2 == City::Bogota;
        case City::Miami: 
            return city2 == City::Atlanta || city2 == City::MexicoCity || city2 == City::Washington || city2 == City::Bogota;
        case City::Milan: 
            return city2 == City::Essen || city2 == City::Paris || city2 == City::Istanbul;
        case City::Montreal: 
            return city2 == City::Chicago || city2 == City::Washington || city2 == City::NewYork;
        case City::Moscow: 
            return city2 == City::StPetersburg || city2 == City::Istanbul || city2 == City::Tehran;
        case City::Mumbai: 
            return city2 == City::Karachi || city2 == City::Delhi || city2 == City::Chennai;
        case City::NewYork: 
            return city2 == City::Montreal || city2 == City::Washington || city2 == City::London || city2 == City::Madrid;
        case City::Osaka: 
            return city2 == City::Taipei || city2 == City::Tokyo;
        case City::Paris: 
            return city2 == City::Algiers || city2 == City::Essen || city2 == City::Madrid || city2 == City::Milan || city2 == City::London;
        case City::Riyadh: 
            return city2 == City::Baghdad || city2 == City::Cairo || city2 == City::Karachi;
        case City::SanFrancisco: 
            return city2 == City::LosAngeles || city2 == City::Chicago || city2 == City::Tokyo || city2 == City::Manila;
        case City::Santiago: 
            return city2 == City::Lima;
        case City::SaoPaulo: 
            return city2 == City::Bogota || city2 == City::BuenosAires || city2 == City::Lagos || city2 == City::Madrid;
        case City::Seoul: 
            return city2 == City::Beijing || city2 == City::Shanghai || city2 == City::Tokyo;
        case City::Shanghai: 
            return city2 == City::Beijing || city2 == City::HongKong || city2 == City::Taipei || city2 == City::Seoul || city2 == City::Tokyo;
        case City::StPetersburg: 
            return city2 == City::Essen || city2 == City::Istanbul || city2 == City::Moscow;
        case City::Sydney: 
            return city2 == City::Jakarta || city2 == City::Manila || city2 == City::LosAngeles;
        case City::Taipei: 
            return city2 == City::Shanghai || city2 == City::HongKong || city2 == City::Osaka || city2 == City::Manila;
        case City::Tehran: 
            return city2 == City::Baghdad || city2 == City::Moscow || city2 == City::Karachi || city2 == City::Delhi;
        case City::Tokyo: 
            return city2 == City::Seoul || city2 == City::Shanghai || city2 == City::Osaka || city2 == City::SanFrancisco;
        case City::Washington: 
            return city2 == City::Atlanta || city2 == City::NewYork || city2 == City::Montreal || city2 == City::Miami;
        }
    }

    bool Board::hasStation(const City city)
    {
        return stations->at((unsigned long)city);
    }

    void Board::buildStation(const City city)
    {
        stations->at((unsigned long)city) = true;
    }

    // Return true if successfully cured
    bool Board::cure(Color color)
    {
        if(isCured(color))
        {
            return false;
        }
        cures->at((unsigned long)color) = true;
        return true;
    }

    bool Board::isCured(const Color color)
    {
        return cures->at((unsigned long)color);
    }

    bool Board::is_clean()
    {
        for(unsigned long i = 0; i < num_of_cities; i++)
        {
            if(sickness->at(i) > 0){return false;}
        }
        return true;
    }

    void Board::remove_cures()
    {
        for(unsigned long i = 0; i < num_of_colors ; i++)
        {
            cures->at(i) = false;
        }
    }

    void Board::remove_stations()
    {
        for(unsigned long i = 0; i < num_of_cities; i++)
        {
            stations->at(i) = false;            
        }
    }

    int& Board::operator[](City city) 
    {
        return sickness->at((unsigned long)city);
    }

    std::ostream& operator<<(std::ostream& os, const Board board)
    {
        os << "Cures status: " << endl;
        for(unsigned long i = 0; i < num_of_colors; i++)
        {
            os << "Color: " << getColorname(i);
            if(board.cures->at(i))
            {
                os << "Cured" << endl;
            }
            else
            {
                os << "Not cured" << endl;
            }
        }

        os << "Cities status: " << endl;
        for(unsigned long i = 0; i < num_of_cities; i++)
        {
            os << "City: " << getCityname(i) << " Level of sickness: " << board.sickness->at(i) << " Station status: ";
            if(board.stations->at(i))
            {
                os << "Has station" << endl;
            }
            else
            {
                os << "Doesn't have a station" << endl;
            }
        }
        return os;
    }
}