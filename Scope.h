//
// Created by 郑虎 on 15 年 五月. 4..
//

/*
 * A scope is a scope
 * It does not support evaluation, because it is an environment
 * A scope should have a name, to avoid conflict
 * Scope should support inheritance, or copy
 * And also merging, or force passing
 */

// TODO: we must have closure in this language...

#ifndef SCOPEBASEDLANGUAGE_SCOPE_H
#define SCOPEBASEDLANGUAGE_SCOPE_H

#include <vector>
#include "Token.h"
#include <map>

class Scope {

private:

    std::vector<std::map<std::string, Token>> symbols; // What should the latter value be? It should be an evaluable thing, maybe Token is right, mayb not.
    // A token is different from a name, or identifier. So the first argument is an identifier, or alias.

    // TODO:Maybe we should override some operators...
    // TODO:And do some namespace wrapping thing.

public:

    Scope();
    ~Scope();
    void addToken(std::string identifier, Token newToken); // TODO: maybe as an operator instead of a function
    Scope mergeWith(Scope anotherScope);

};


#endif //SCOPEBASEDLANGUAGE_SCOPE_H
