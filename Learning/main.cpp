//
//  main.cpp
//  Learning
//
//  Created by Trevor Hall on 2/19/16.
//  Copyright © 2016 hallta. All rights reserved.
//

#include <iostream>

#include "tchar.h"
#include "constants.h"
#include "enum.h"
#include "friend.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "int 100 is '" << cst(100) << "' when casted" << endl;
    cout << "chr 'd' is " << cst('d') << " when casted" << endl;
    cout << "constant THIRTY = " << constants::THIRTY << endl;
    
    cout << "ONE == " << Nums::ONE << endl;
    cout << "TWO == " << Nums::TWO << endl;
    
    SecondNums three = SecondNums::THREE;
    cout << "THREE == " << static_cast<int>(three) << endl;
    
    Friend frnd = getFriend("ted");
    cout << "My friend, " << frnd.name + ", " + (frnd.mean ? "is" : "is not") + " mean" << endl;
    
    return 0;
}

Friend getFriend(std::string name) {
    Friend tmp;
    tmp.name = name;
    tmp.mean = false;
    
    return tmp;
}

char tchar(int a) {
    return char(a);
}

int cst(char a) {
    return static_cast<int>(a);
}

char cst(int a) {
    return static_cast<char>(a);
}