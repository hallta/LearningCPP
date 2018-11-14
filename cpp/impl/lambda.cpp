#include <iostream>
#include "lambda.h"

using namespace std;

namespace Lambda {
    void actuallyDoTheStuff();

    void doLambdaStuff() {
        cout << "== starting lambda stuff ==" << endl;
        actuallyDoTheStuff();
        cout << "== ending lambda stuff ==" << endl;
    };    

    void actuallyDoTheStuff() {
        auto lambdaA = [](int a) {
            cout << a << endl;
        };
        lambdaA(1);

    }
}