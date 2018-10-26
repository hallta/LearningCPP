#include "add.h"

int add(int x, int y) {
    int res = doMaths(x, y);

    return res;
}

int getX(int x) {
    return x;
}

int getY(int y) {
    return y;
}

int doMaths(int x, int y) {
    return getX(x) + getY(y);
}