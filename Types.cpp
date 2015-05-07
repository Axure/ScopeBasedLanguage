//
// Created by 郑虎 on 15 年 五月. 4..
//

#include "Types.h"

INT::INT(int a) {
    this->self = a;
}

INT::~INT() {

}

//int INT::operator = () {
//    return this->self;
//}

INT &operator + (const INT &a, const INT &b) {

    INT *_result = new INT(a.self + b.self);
    return (*_result);
}

INT &operator - (const INT &a, const INT &b) {

    INT *_result = new INT(a.self - b.self);
    return (*_result);
}

INT &operator * (const INT &a, const INT &b) {

    INT *_result = new INT(a.self * b.self);
    return (*_result);
}

INT &operator / (const INT &a, const INT &b) {

    INT *_result = new INT(a.self / b.self);
    return (*_result);
}

INT &operator % (const INT &a, const INT &b) {

    INT *_result = new INT(a.self % b.self);
    return (*_result);
}

INT &operator ^ (const INT &a, const INT &b) {

    INT *_result = new INT((int)std::pow(a.self, b.self));
    return (*_result);
}

//INT &INT::operator = (const INT &a) {
//
//    INT *_result = new INT(a.self);
//    return (*_result);
//}

std::ostream &operator << (std::ostream &os, const INT &a) {
    os << a.self;
    return os;
}

TypeMap::TypeMap() {
    this->OperatorMap['+'] = true;
    this->OperatorMap['-'] = true;
    this->OperatorMap['*'] = true;
    this->OperatorMap['%'] = true;
    this->OperatorMap['^'] = true;
    this->OperatorMap['='] = true;


    this->BracketMap['('] = true;
    this->BracketMap[')'] = true;

    this->NumberMap['0'] = true;
    this->NumberMap['1'] = true;
    this->NumberMap['2'] = true;
    this->NumberMap['3'] = true;
    this->NumberMap['4'] = true;
    this->NumberMap['5'] = true;
    this->NumberMap['6'] = true;
    this->NumberMap['7'] = true;
    this->NumberMap['8'] = true;
    this->NumberMap['9'] = true;

    this->IdentifierMap['a'] = true;
    this->IdentifierMap['b'] = true;
    this->IdentifierMap['c'] = true;
    this->IdentifierMap['d'] = true;
    this->IdentifierMap['e'] = true;
    this->IdentifierMap['f'] = true;
    this->IdentifierMap['g'] = true;
    this->IdentifierMap['h'] = true;
    this->IdentifierMap['i'] = true;
    this->IdentifierMap['j'] = true;
    this->IdentifierMap['k'] = true;
    this->IdentifierMap['l'] = true;
    this->IdentifierMap['m'] = true;
    this->IdentifierMap['n'] = true;
    this->IdentifierMap['o'] = true;
    this->IdentifierMap['p'] = true;
    this->IdentifierMap['q'] = true;
    this->IdentifierMap['r'] = true;
    this->IdentifierMap['s'] = true;
    this->IdentifierMap['t'] = true;
    this->IdentifierMap['u'] = true;
    this->IdentifierMap['v'] = true;
    this->IdentifierMap['w'] = true;
    this->IdentifierMap['x'] = true;
    this->IdentifierMap['y'] = true;
    this->IdentifierMap['z'] = true;


}

TypeMap::~TypeMap() {

}

TokenType TypeMap::evalType(char inChar) {
    if (this->OperatorMap.count(inChar) != 0) return TokenType::Operator;
    if (this->BracketMap.count(inChar) != 0) return TokenType::Bracket;
    if (this->NumberMap.count(inChar) != 0) return TokenType::Number;
    if (this->IdentifierMap.count(inChar) != 0) return TokenType::Identifier;


    return TokenType::Undefined;

}