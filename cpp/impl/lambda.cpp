#include <iostream>
#include <vector>
#include <algorithm>
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

        std::vector<int> vect = {1,3,34,4,4,3,2,2};
        auto DoIt = [](int a) -> void { std::cout << "vect: " << a << std::endl; };
        auto func = [&DoIt](std::vector<int> v) -> void { 
            for ( int i : v ) {
                DoIt(i);
            }
        };

        func(vect);

        std::vector<int>::iterator it = std::find_if(vect.begin(), vect.end(), [](int i) -> bool {
            return i > 2;
        });

        cout << sizeof(it) << endl;

        void(*FunctionPointer)() = []() -> void{ cout << "in function pointer" << endl; };
        FunctionPointer();
    }
}