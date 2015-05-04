//
// Created by 郑虎 on 15 年 五月. 4..
//

#ifndef SCOPEBASEDLANGUAGE_FUNCTION_H
#define SCOPEBASEDLANGUAGE_FUNCTION_H

#include <vector>

#include "Token.h"
#include "Paragraph.h"
#include "Scope.h"
#include "Types.h"

class Function {


private:
    std::string name;
    std::vector<std::string> parameters;
    Paragraph body;

public:

    INT evaluateSelf(Scope scope); // TODO: figure out why macro substitution does not work here.



};


#endif //SCOPEBASEDLANGUAGE_FUNCTION_H

// TODO: remember, scope based is for better function callback.
// TODO: we have to do well the closure. It should be totally functional.
// TODO: optimization is with the lowest priority, but not to be forgotten.