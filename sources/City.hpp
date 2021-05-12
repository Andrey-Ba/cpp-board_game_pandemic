#pragma once

namespace pandemic
{
    static const u_int num_of_cities = 48;

    enum class City
    {
        Algiers,
        Atlanta,
        Baghdad,
        Bangkok,
        Beijing,
        Bogota,
        BuenosAires,
        Cairo,
        Chennai,
        Chicago,
        Delhi,
        Essen,
        HoChiMinhCity,
        HongKong,
        Istanbul,
        Jakarta,
        Johannesburg,
        Karachi,
        Khartoum,
        Kinshasa,
        Kolkata,
        Lagos,
        Lima,
        London,
        LosAngeles,
        Madrid,
        Manila,
        MexicoCity,
        Miami,
        Milan,
        Montreal,
        Moscow,
        Mumbai,
        NewYork,
        Osaka,
        Paris,
        Riyadh,
        SanFrancisco,
        Santiago,
        SaoPaulo,
        Seoul,
        Shanghai,
        StPetersburg,
        Sydney,
        Taipei,
        Tehran,
        Tokyo,
        Washington
    };

    static std::string getCityname(const unsigned long city_num)
    {
        std::string cities[num_of_cities] = {"Algiers","Atlanta","Baghdad","Bangkok","Beijing","Bogota","BuenosAires","Cairo","Chennai","Chicago","Delhi","Essen","HoChiMinhCity","HongKong","Istanbul","Jakarta","Johannesburg","Karachi","Khartoum","Kinshasa","Kolkata","Lagos","Lima","London","LosAngeles","Madrid","Manila","MexicoCity","Miami","Milan","Montreal","Moscow","Mumbai","NewYork","Osaka","Paris","Riyadh","SanFrancisco","Santiago","SaoPaulo","Seoul","Shanghai","StPetersburg","Sydney","Taipei","Tehran","Tokyo","Washington"};
        return cities[city_num];
    }
}