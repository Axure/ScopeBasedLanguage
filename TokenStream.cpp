//
// Created by 郑虎 on 15 年 五月. 5..
//

#include "TokenStream.h"

TokenStream::TokenStream() {

    this->self = "";

}

TokenStream::TokenStream(std::string inString) {
    this->self = inString;

}

TokenStream::~TokenStream() {

}

Token TokenStream::nextToken() {

    Token _resultToken = Token();


    return _resultToken;

}