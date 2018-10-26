#include <iostream>
#include "add.h"

int main() {

    int x;
    int y;

    std::cout << "Please enter value for x: ";
    std::cin >> x;

    std::cout << "Please enter value for y: ";
    std::cin >> y;

    std::cout << x << " + " << y << " = " << add(x, y) << std::endl;

    return 0;
}