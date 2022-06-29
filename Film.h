#include <string>
#include <vector>
#include <ctime>

struct Actor{
    std::string name;

};
struct Role{
    Actor actor;
    std::string roleName;
};


struct Film{
    std::string name;
    std::string studio;
    std::string country;
    int date;
    std::vector<Role> roles;
    std::string author;
    std::string screenwriter;
    std::string producer;
};