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
        lambdaA(234879);

        auto lambdaB = [](int a, int b) -> void {
            cout << a << " ... " << b << endl;
        };

        int stuff[] = {1, 2, 3, 5, 7, 8};
        int i = 0;
        for (auto thing : stuff) {
            lambdaB(i++, thing);
        }
    }
}