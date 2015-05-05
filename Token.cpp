//
// Created by 郑虎 on 15 年 五月. 3..
//

#include "Token.h"
#include "Types.h"



// TODO: Define the tokens.

Token::Token() {

}


Token::Token(std::string sourceString) {
    TypeMap TypeStandard;
    // TODO: read the types of preset operators and numbers from the config file, instead of directly writing here.
    this->type = TypeStandard.evalType(sourceString[0]);
    switch (this->type) {
        case TokenType::Identifier:
            this->self.identifier = sourceString; // Here we only check for the first character, which may not be sufficient...
            break;

        case TokenType::Number:
            long _length = sourceString.length();
            this->self.number = 0;
            for (long i = 0; i < _length; ++i) {
                this->self.number *= 10;
                this->self.number += (int)sourceString[i] - 48;
            }
            break;

        case TokenType::Operator:
            this->self.operation = sourceString[0];
            break;

        case TokenType::Bracket:
            this->self.bracket = sourceString[0];
            break;
        case TokenType::Undefined:
            throw;

    }


}

Token::~Token() {
}

INT Token::evaluateSelf() {


}
