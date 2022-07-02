#include <iostream>
#include "nlohmann/json.hpp"
#include "Film.h"
#include <fstream>



void find(nlohmann::json &dict){
    std::cout << "Enter name of actor\n";
    std::string name;
    std::getline(std::cin, name);
    for(auto i = dict.begin(); i != dict.end(); i++){
        auto roles = (*i)["roles"];
        auto actor = roles.find(name);
        if(actor != roles.end()){
            std::cout << "Name of film: " << i.key() << ", role of actor is: " << actor.value() << std::endl;
        }
    }
}

int main() {
    nlohmann::json dict;

    std::ifstream  file("film.json");
    try{
    if(file.is_open()) {
        file >> dict;
        file.close();
        std::string str = "roles";
        find(dict);
    }
    }
    catch (...)
    {
        std::cerr << "Error parse json\n";
    }
    return 0;
}
