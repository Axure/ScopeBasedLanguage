//
// Created by 郑虎 on 15 年 五月. 4..
//

#ifndef SCOPEBASEDLANGUAGE_TYPES_H
#define SCOPEBASEDLANGUAGE_TYPES_H

#define NUM_TYPE INT;

#include <cmath>

class INT {

private:
    int self;

public:

    INT(int a);
    ~INT();
//    int operator = ();
    INT &operator + (const INT &a, const INT &b);
    INT &operator - (const INT &a, const INT &b);
    INT &operator * (const INT &a, const INT &b);
    INT &operator / (const INT &a, const INT &b);
    INT &operator % (const INT &a, const INT &b);
    INT &operator ^ (const INT &a, const INT &b);

};
// TODO: Override the = operator for NUM_TYPE, and all the other operators... For built-in high precision...


enum TOKEN_TYPE {

};

#endif //SCOPEBASEDLANGUAGE_TYPES_H
