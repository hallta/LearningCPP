#include <unistd.h>
#include <iostream>
#include "ball_drop.h"
#include "constants.h"

namespace ball_drop {
    void drop_the_ball(const double height) {
        double ball_location = height;
        int second(1);

        while((ball_location - constants::gravity) > 0) {
            ball_location -= constants::gravity;

            std::cout << "At second " << second << " ball is at " << ball_location << std::endl;
            second++;

            usleep(constants::one_second);
        }

        std::cout << "Ball hit the ground" << std::endl;
    }
}