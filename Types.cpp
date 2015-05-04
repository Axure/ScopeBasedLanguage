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

INT &INT::operator + (const INT &a, const INT &b) {

    INT *_result = new INT(a.self + b.self);
    return (*_result);
}

INT &INT::operator - (const INT &a, const INT &b) {

    INT *_result = new INT(a.self - b.self);
    return (*_result);
}

INT &INT::operator * (const INT &a, const INT &b) {

    INT *_result = new INT(a.self * b.self);
    return (*_result);
}

INT &INT::operator / (const INT &a, const INT &b) {

    INT *_result = new INT(a.self / b.self);
    return (*_result);
}

INT &INT::operator % (const INT &a, const INT &b) {

    INT *_result = new INT(a.self % b.self);
    return (*_result);
}

INT &INT::operator ^ (const INT &a, const INT &b) {

    INT *_result = new INT((int)std::pow(a.self, b.self));
    return (*_result);
}