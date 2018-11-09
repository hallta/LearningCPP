#include <iostream>
#include "add.h"
#include "ball_drop.h"
#include "arithmetic.h"
#include "val_ref_ptr.h"
#include "scoping.h"

void do_the_basics();
void do_ball_drop_thing();
void do_maths();
void do_val_ref_ptr_stuff();
void do_scoping();

int main() {

    std::cout << "== Start ==\n\n";

    do_the_basics();
    do_ball_drop_thing();
    do_maths();
    do_val_ref_ptr_stuff();
    do_scoping();

    std::cout << "\n\n == End == \n\n";

    return 0;
}

void do_the_basics() {
    int x = 1;
    int y(2);

    std::cout << "Please enter value for x: " << std::endl;
    //std::cin >> x;

    std::cout << "Please enter value for y: " << std::endl;
    //std::cin >> y;

    int result(add(x, y));
    std::cout << x << " + " << y << " = " << result << std::endl;

    std::cout << std::endl;
    std::cout << "===" << std::endl;
    std::cout << std::endl;

    char bracket(char(91));
    int un_bracket(bracket);
    std::cout << char(91) << std::endl;
    std::cout << char('[') << std::endl;
    std::cout << bracket << std::endl;
    std::cout << un_bracket << std::endl;
    std::cout << static_cast<int>(bracket) << std::endl;
    std::cout << static_cast<char>(static_cast<int>(bracket)) << std::endl;

    std::cout << std::endl;
    std::cout << "===" << std::endl;
    std::cout << std::endl;
    std::cout << "===" << std::endl;
}

void do_ball_drop_thing() {
    // ball drop thing
    std::cout << "Enter the initial biulding height: ";
    double height;
    //std::cin >> height;
    std::cout << std::endl;
    height = 1;
    ball_drop::drop_the_ball(height);
}

void do_maths() {
    arithmetic::mixed_type_math();
    arithmetic::goofy_assignments();
}

void do_val_ref_ptr_stuff() {
    std::cout << "\n\n==val/ref/ptr==\n";
    int val(5);
    val_ref_ptr::pass_by_val(val);
    std::cout << val << std::endl;

    int r(5);
    int &ref = r;
    val_ref_ptr::pass_by_ref(ref);
    std::cout << "pass_by_ref == " << ref << std::endl;

    int *ptr = &ref;
    val_ref_ptr::pass_by_ptr(ptr);
    std::cout << "pass_by_ptr == " << *ptr << std::endl;

    int re_val = *ptr;
    val_ref_ptr::pass_by_val(re_val);
    std::cout << "pass_by_val == " << re_val << std::endl;

    int *re_ptr = &re_val;
    val_ref_ptr::pass_by_ptr(re_ptr);
    std::cout << "\n== ... ==\n" << std::endl;
    std::cout << *re_ptr << std::endl;
    std::cout << ref << std::endl;
    std::cout << re_val << std::endl;
}

void do_scoping() {
    ScopingTest::variableShadowing();
}