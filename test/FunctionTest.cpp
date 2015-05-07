//
// Created by 郑虎 on 15 年 五月. 4..
//

#include "../Function.h"
#include <iostream>

int main() {

    std::cout << "Test begin:" << std::endl;
    Function myFunction = Function("f(a,b)");
    std::cout << myFunction.toString();
    return 0;
}