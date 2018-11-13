#pragma once

namespace RValueRefTest {
    class Foo {

        public:
            Foo();
            Foo(const Foo& other);
            Foo(Foo&& other);
            Foo& operator=(Foo&& other);
            ~Foo() = default;
    };

    class Bar : Foo {
        public:
            void moveSomeStuff();
    };
}