#include "cpr/cpr.h"
#include <iostream>
#include <string>
void Task2() {
    cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/html"), cpr::Header({{"accept", "text/html"}}));
    int start = r.text.find("<h1>")+4;
    int end = r.text.find("</h1>") - start;
    std::string str = r.text.substr(start,end);
    std::cout << str << std::endl;
}