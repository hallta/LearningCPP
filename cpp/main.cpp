#include <iostream>
#include "add.h"

int main() {

    int x = 1;
    int y = 2;

    std::cout << "Please enter value for x: ";
    //std::cin >> x;

    std::cout << "Please enter value for y: ";
    //std::cin >> y;

    int result = add(x, y);
    std::cout << x << " + " << y << " = " << result << std::endl;

    return 0;
}