#include <iostream>
#include "rvalue_ref.h"

using namespace std;

namespace RValueRefTest {
    Foo::Foo() {
        cout << "\t... in standard constructor" << endl;
    }

    Foo::Foo(const Foo& other) {
        cout << "\t... in copy constructor" << endl;
    }

    Foo::Foo(Foo&& other) {
        cout << "\t... in move constructor" << endl;
    }

    Foo& Foo::operator=(Foo&& other) {
        cout << "\t... in rvalue reference assignement operator" << endl;
        return other;
    }

    void Bar::moveSomeStuff() {
        cout << endl;
        cout << "moveSomeStuff()" << endl;

        cout << "Bar b1;\n";
        Bar b1;
        cout << "Bar b2 = b1;\n";
        Bar b2 = b1;
        cout << "Bar b3 = move(b2);\n";
        Bar b3 = move(b2);
        cout << "Bar b4(b3);\n";
        Bar b4(b3);
        cout << "Bar b5( move(b4) );\n";
        Bar b5( move(b4) );
        cout << "Bar b6 = move(b5);\n";
        Bar b6 = move(b5);
        cout << "Bar b7;\nb7 = move(b6);" << endl;
        Bar b7;
        b7 = move(b6);

        cout << "done!! moveSomeStuff()" << endl;
    }
}