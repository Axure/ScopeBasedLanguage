//
// Created by 郑虎 on 15 年 五月. 4..
//

#ifndef SCOPEBASEDLANGUAGE_TYPES_H
#define SCOPEBASEDLANGUAGE_TYPES_H

#define NUM_TYPE INT;

#include <iostream>
#include <cmath>
#include <map>

class INT { // A class that behaves like the normal int, but extendable and customizable.

private:
    int self;

public:

    INT(int a);
    ~INT();
//    int operator = ();
    friend INT &operator + (const INT &a, const INT &b);
    friend INT &operator - (const INT &a, const INT &b);
    friend INT &operator * (const INT &a, const INT &b);
    friend INT &operator / (const INT &a, const INT &b);
    friend INT &operator % (const INT &a, const INT &b);
    friend INT &operator ^ (const INT &a, const INT &b);
//    friend INT &operator = (const INT &a);
    std::ostream &operator << (std::ostream &os);

};
// TODO: Override the = operator for NUM_TYPE, and all the other operators... For built-in high precision...


enum TOKEN_TYPE {

};

enum class TokenType {
    Identifier, Number, Operator, Bracket, Undefined // Function is a sort of identifier.
    // TODO: do we need reserved keywords or just using operators?
};

class TypeMap { // What is a better name than TypeMap? This just sounds like a random name...
// TODO: if nested class definition is valid? Ask and search...
private:
    std::map<char, bool> OperatorMap; // What is the difference between a map and a pair? Or boost tuples?
    std::map<char, bool> BracketMap;
    std::map<char, bool> NumberMap;
    std::map<char, bool> IdentifierMap;
public:
    TypeMap();
    ~TypeMap();
    TokenType evalType(char inChar);
};
// TODO: should the separators be with this TypeMap or handled independently?




#endif //SCOPEBASEDLANGUAGE_TYPES_H
