//
// Created by 郑虎 on 15 年 五月. 5..
//

#ifndef SCOPEBASEDLANGUAGE_TOKENSTREAM_H
#define SCOPEBASEDLANGUAGE_TOKENSTREAM_H

//#include <
#include "Token.h"
#include "Expression.h"
// A token stream can involve multiple expressions.
// It implements the tokenizer
class TokenStream {

private:
    std::string self;
    std::vector<Token> entity;

public:

    TokenStream();
    TokenStream(std::string inString);
    ~TokenStream();
    Token nextToken(); // TODO: a new function, that not only outputs the next token, but also jumps to the end position.
    // TODO: deal with white spaces, or more generally, \t characters.



};


#endif //SCOPEBASEDLANGUAGE_TOKENSTREAM_H
