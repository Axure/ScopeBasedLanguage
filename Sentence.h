//
// Created by 郑虎 on 15 年 五月. 3..
//

/* Guideline: A private element starts with an underline.
 * A temporary variable starts with two consecutive underlines.
 */



#ifndef SCOPEBASEDLANGUAGE_SENTENCE_H
#define SCOPEBASEDLANGUAGE_SENTENCE_H

#include <vector>
#include <string>
#include "Token.h"

class Sentence {

private:

    std::vector<Token> _tokenStream;
    void _parseString(std::string inString);
public:

    Sentence(std::string inString);
    ~Sentence();

};


#endif //SCOPEBASEDLANGUAGE_SENTENCE_H
// TODO: An highlighter, refined. And an IDE.