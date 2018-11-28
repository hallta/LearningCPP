#include <iostream>
#include "interface.h"

using namespace std;

using namespace InterfaceTest;


TheInterface::TheInterface(int i) {
    cout << "making a TheInterface" << endl;
}

void TheInterface::doFoo() {
    cout << "doing a foo" << endl;
};