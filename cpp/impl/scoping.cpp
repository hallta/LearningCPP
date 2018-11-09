#include <iostream>
#include "scoping.h"

using namespace std;

namespace ScopingTest {
    void variableShadowing() {
        cout << "== const stuff ==" << endl;

        const int foo(5);

        {
            int foo(6);
            cout << foo << endl;

            {
                foo = 7;
                cout << foo << endl;
            }
        }

        cout << foo << endl;

        const int* bar = &foo;
        anotherThing(bar);
    }

   void anotherThing(const int* foo) {
        cout << *foo << endl;
    }
}