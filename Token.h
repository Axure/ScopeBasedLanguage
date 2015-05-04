//
// Created by 郑虎 on 15 年 五月. 3..
//

#ifndef SCOPEBASEDLANGUAGE_TOKEN_H
#define SCOPEBASEDLANGUAGE_TOKEN_H

#include "Types.h"

class Token {

private:

public:

//    Token();
    Token(std::string sourceString);


    ~Token();

    NUM_TYPE evaluateSelf();


};


#endif //SCOPEBASEDLANGUAGE_TOKEN_H
