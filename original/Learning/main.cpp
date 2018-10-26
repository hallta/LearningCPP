//
//  main.cpp
//  Learning
//
//  Created by Trevor Hall on 2/19/16.
//  Copyright © 2016 hallta. All rights reserved.
//

#include <iostream>
#include <queue>
#include <array>

#include "tchar.h"
#include "constants.h"
#include "enum.h"
#include "friend.h"
#include "family.h"
#include "arr.h"

void playWithQueue();
void playWithArray();

int main(int argc, const char * argv[]) {
    using namespace std;
    
    cout << "int 100 is '" << cst(100) << "' when casted" << endl;
    cout << "chr 'd' is " << cst('d') << " when casted" << endl;
    cout << "constant THIRTY = " << constants::THIRTY << endl;
    
    cout << "ONE == " << Nums::ONE << endl;
    cout << "TWO == " << Nums::TWO << endl;
    
    SecondNums three = SecondNums::THREE;
    cout << "THREE == " << static_cast<int>(three) << endl;
    
    Friend frnd = getFriend("ted");
    cout << "My friend, " << frnd.name + ", " + (frnd.mean ? "is" : "is not") + " mean" << endl;
    
    Family fooFam = {{}};
    Family barFam = { { "tree", false } };
    cout << "family: " << fooFam.frnd.name << endl;
    cout << "family: " << barFam.frnd.name << endl;
    
    int arr[] = {1,2,3};
    for (int i = 0; i < sizeof(arr); i++)
        cout << "i = " << i << endl;
    
    playWithQueue();
    playWithArray();
    
    return 0;
}

void playWithQueue() {
    std::queue<int> foo;
    
    int i = 0;
    while (++i < 100)
        foo.push(i);
    
    std::cout << "this array is: " << foo.size() << std::endl;
    
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