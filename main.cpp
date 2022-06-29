#include <iostream>
#include "nlohmann/json.hpp"
#include "Film.h"
#include <fstream>
void fill(nlohmann::json &dict){
    Film film;
    film.name = "The Dark Knight";
    dict["name"] = film.name;
    film.date = 2008;
    dict["date"] = film.date;
    film.studio = "DC Comics";
    dict["studio"] = film.studio;
    film.country = "USA";
    dict["county"] = film.country;
    film.roles.emplace_back(Role{Actor{"Cristian"}, "Batman"});
    film.roles.emplace_back(Role{Actor{"Hit"}, "Joker"});
    nlohmann::json d;
    for(int i = 0; i < film.roles.size(); i++){
        d[film.roles[i].actor.name] = film.roles[i].roleName;
    }

    dict["roles"] = d;
}


int main() {
    nlohmann::json dict;
    fill(dict);
    std::ofstream  file("film.json");
    file << dict;
    file.close();
    
    return 0;
}
