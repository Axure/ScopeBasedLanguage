//
// Created by 郑虎 on 15 年 五月. 7..
//

#include "../Types.h"
#include <iostream>

int main() {

    std::cout << "This is the type test" << std::endl;

    INT a = INT(3);
    INT b = INT(1);
    INT c = INT(5);
    std::cout << "[ostream test] A shoud be 3, actually is: " << a << std::endl;
    std::cout << "[addition test] Sum should be 6, actually is: " << b + c << std::endl;
    std::cout << "[subtraction test] Sum should be -2, actually is: " << a - c << std::endl;
    std::cout << "[multiplication test] Sum should be 3, actually is: " << b * a << std::endl;
    std::cout << "[division test] Sum should be 1, actually is: " << c / a << std::endl;
    std::cout << "[remainder test] Sum should be 2, actually is: " << c % a << std::endl;
    std::cout << "[power test] Sum should be 125, actually is: " << (c^a) << std::endl; // Priority problems?
    // TODO: Rewrite in <cassert>.
//    std::cout << "[ test] Sum should be 6, actually is: " << b + c << std::endl;
}