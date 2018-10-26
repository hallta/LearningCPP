#include <iostream>
#include "add.h"
#include "ball_drop.h"
#include "arithmetic.h"

int main() {

    int x = 1;
    int y(2);

    std::cout << "Please enter value for x: " << std::endl;
    //std::cin >> x;

    std::cout << "Please enter value for y: " << std::endl;
    //std::cin >> y;

    int result(add(x, y));
    std::cout << x << " + " << y << " = " << result << std::endl;

    std::cout << std::endl;
    std::cout << "===" << std::endl;
    std::cout << std::endl;

    char bracket(char(91));
    int un_bracket(bracket);
    std::cout << char(91) << std::endl;
    std::cout << char('[') << std::endl;
    std::cout << bracket << std::endl;
    std::cout << un_bracket << std::endl;
    std::cout << static_cast<int>(bracket) << std::endl;
    std::cout << static_cast<char>(static_cast<int>(bracket)) << std::endl;

    std::cout << std::endl;
    std::cout << "===" << std::endl;
    std::cout << std::endl;
    std::cout << "===" << std::endl;

    // ball drop thing
    std::cout << "Enter the initial biulding height: ";
    double height;
    //std::cin >> height;
    std::cout << std::endl;
    height = 1;
    ball_drop::drop_the_ball(height);

    // 3.x
    arithmetic::mixed_type_math();
    arithmetic::goofy_assignments();

    return 0;
}