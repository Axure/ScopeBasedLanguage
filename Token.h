//
// Created by 郑虎 on 15 年 五月. 3..
//

#ifndef SCOPEBASEDLANGUAGE_TOKEN_H
#define SCOPEBASEDLANGUAGE_TOKEN_H

#include "Types.h"
#include <iosfwd>
#include <string>
#include <map>



class Token {

private:
    TokenType type;
    union {
        std::string identifier;
        int number;
        char operation; // Beucase "operator" is reserved.
        char bracket;
    } self;
    // A map or a union plus a getter function?
    // We need a pseudo self.
    // TODO: Impose type check your self within this class!
    // But what about the return type? This is still unresolved...
    // TODO: should the type check function be private and implemented?

public:

    Token();
    Token(std::string sourceString); // This may overlap with some functions in the token stream, but never mind. It is just a convenient tool.
    // TODO: How to throw exceptions if the source string format is not correct?


    ~Token();

    INT evaluateSelf();

    static bool isToken();


};


#endif //SCOPEBASEDLANGUAGE_TOKEN_H
