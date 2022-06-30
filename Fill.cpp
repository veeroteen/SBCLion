#include "nlohmann/json.hpp"
#include "Film.h"
#include "string"

void fill(nlohmann::json &result){
    std::vector <std::string> names{"Batman" , "afdhg" , "afdg" , "agfd" , "adfg"};

    for(int i = 0; i < 5; i++) {
        nlohmann::json dict;
        Film film;
        film.date = 2008;
        dict["date"] = film.date;
        film.studio = "DC Comics";
        dict["studio"] = film.studio;
        film.country = "USA";
        dict["county"] = film.country;
        film.roles.emplace_back(Role{Actor{"Cristian"}, "Batman"});
        film.roles.emplace_back(Role{Actor{"Hit"}, "Joker"});
        nlohmann::json d;
        film.author = "Bob";
        dict["author"] = film.author;
        film.producer = "Christopher";
        dict["producer"] = film.producer;
        film.screenwriter = "Christopher";
        dict["screenwriter"] = film.screenwriter;
        for (int i = 0; i < film.roles.size(); i++) {
            d[film.roles[i].actor.name] = film.roles[i].roleName;
        }
        dict["roles"] = d;
        result[names[i]] = dict;
    }

}