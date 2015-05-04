//
// Created by 郑虎 on 15 年 五月. 4..
//

#include "Scope.h"

Scope::Scope() {

}

Scope::~Scope() {

}

void Scope::addToken(std::string identifier, Token newToken) {
    symbols[identifier] = newToken;


}

Scope Scope::mergeWith(Scope anotherScope) {

}