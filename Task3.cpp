#include "cpr/cpr.h"
#include <iostream>
#include <string>
#include <vector>
struct Argument{
    std::string key;
    std::string value;
};
void Task3() {
    std::vector <Argument> arguments;
    while(true){
        std::string str;
        std::cout << "Enter argument and value or request type\n";
        std::cin >> str;
        if(str == "post" || str == "get"){
            if(str == "post"){
                std::vector <cpr::Pair> payloads;
                for(int i = 0; i < arguments.size(); i++){
                    payloads.emplace_back(arguments[i].key.c_str(), arguments[i].value.c_str());
                }
                cpr::Response r = cpr::Post(cpr::Url("http://httpbin.org/post"), cpr::Payload(payloads.begin(),payloads.end()));
                std::cout << r.text << std::endl;

            }
            else if(str == "get"){
                std::string link = "http://httpbin.org/get?";
                for(int i = 0; i < arguments.size(); i++){
                    link += arguments[i].key + '=' + arguments[i].value + '&';
                }
                cpr::Response r = cpr::Get(cpr::Url(link));
                std::cout << r.text << std::endl;
            }
            break;
        }
        else{
            std::string value;
            std::cin >> value;
            arguments.emplace_back(Argument{str,value});
        }
    }
}