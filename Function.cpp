//
// Created by 郑虎 on 15 年 五月. 4..
//

#include "Function.h"
#include <iostream>

Function::Function(std::string inString) {
//    std::string name = "";
    this->name = "";
    int i = -1;
    bool inName = true;
    std::string currentParameter = "";
    while (++i < inString.length() - 1) {
        if (inName) {
            if (inString[i] != '(') {
                this->name += inString[i];
            } else {
                inName = false;
            }
        } else {
            if (inString[i] != ',') {
                currentParameter += inString[i];
            } else {
                this->parameters.push_back(currentParameter);
                currentParameter = "";
            }
        }
    }
    this->parameters.push_back(currentParameter); // TODO: How about the memory management? Should the local and temp variable be freed? What is the difference between a local and a temp variable?
}

std::string Function::toString() {
    std::string _resultString;

    // TODO: analyze the performance of std::string
    _resultString += (this->name + '(');

//    std::cout << this->name << '(';
//    std::cout << *(this->parameters.begin());
    _resultString += *(this->parameters.begin());
    for (std::vector<std::string>::iterator it = ++(this->parameters.begin()); it != parameters.end() ; ++it) {
//        std::cout << ' ' << *it;
        _resultString += (' ' + *it);
    }
    _resultString += ')';
//    std::cout << std::endl;
    return _resultString;
}