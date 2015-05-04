//
// Created by 郑虎 on 15 年 五月. 5..
//

#ifndef SCOPEBASEDLANGUAGE_TOKENSTREAM_H
#define SCOPEBASEDLANGUAGE_TOKENSTREAM_H

//#include <
#include "Token.h"

class TokenStream {

private:
    std::string self;

public:

    TokenStream();
    TokenStream(std::string inString);
    ~TokenStream();
    Token nextToken(); // TODO: a new function, that not only outputs the next token, but also jumps to the end position.


};


#endif //SCOPEBASEDLANGUAGE_TOKENSTREAM_H
