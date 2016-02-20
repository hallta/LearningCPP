//
//  main.cpp
//  Learning
//
//  Created by Trevor Hall on 2/19/16.
//  Copyright © 2016 hallta. All rights reserved.
//

#include <iostream>
#include "main.h"
#include "types.h"

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello World!" << std::endl;
    std::cout << "and the thing is: " << add(1, 2) << std::endl;
    
    outTypes();

    return 0;
}

int add (int x, int y ) {
    return x + y;
}

void outTypes() {

    using namespace std;
    
    cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
    cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
    cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
    cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl; // C++11, may not be supported by your compiler
    cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl; // C++11, may not be supported by your compiler
    cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
    cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
    cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
    cout << "long long:\t" << sizeof(long long) << " bytes" << endl; // C++11, may not be supported by your compiler
    cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
    cout << "long double:\t" << sizeof(long double) << " bytes" << endl;
}