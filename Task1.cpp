#include "cpr/cpr.h"
#include <iostream>
#include <string>
void Task1() {
    while (true) {
        std::cout << "Enter command\n";
        std::string str;
        std::cin >> str;
        if(str == "get") {
            cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
            std::cout << r.text << std::endl;
        }
        else if(str == "post") {
            cpr::Response r = cpr::Post(cpr::Url("http://httpbin.org/post"));
            std::cout << r.text<< std::endl;
        }
        else if(str == "post") {
            cpr::Response r = cpr::Put(cpr::Url("http://httpbin.org/put"));
            std::cout << r.text<< std::endl;
        }
        else if(str == "post") {
            cpr::Response r = cpr::Delete(cpr::Url("http://httpbin.org/delete"));
            std::cout << r.text<< std::endl;
        }
        else if(str == "post") {
            cpr::Response r = cpr::Patch(cpr::Url("http://httpbin.org/patch"));
            std::cout << r.text<< std::endl;
        }
        else if(str == "exit") break;
    }
}
