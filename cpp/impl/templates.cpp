#include <iostream>
#include <string>
#include <ctime>
#include <functional>
#include "templates.h"

using namespace std;

namespace TemplateTests {

    void doTemplateStuff() {
        cout << "== starting template stuff ==" << endl;
      //templatedSomething(1);
      //templatedSomething(234.33);

        benchTemplates();
        cout << "== ending template stuff ==" << endl;
    }

    template <typename T>
    int doBench(T param, void(*benchFunc)(T arg)) {
        clock_t start = clock();
        double elapsed_secs(0);
        int i = 0;
        while (elapsed_secs < 1) {
            benchFunc(param);
            elapsed_secs = double(clock() - start) / CLOCKS_PER_SEC;
            i++;
        }

        return i;
    }

    void noTemplateTest(int i) { int b = i; }

    void benchTemplates() {
        void(*foo)(int i) = [](int i) -> void{ int b = i; };
        cout << "template int assign: " << doBench(1, foo) << endl;

        cout << "non template in assign: " << doBench(1, &noTemplateTest) << endl;
    }

    void dontTemplateSomething(int param) { int copyParam = param; }
    void dontTemplateSomething(float param) { float copyParam = param; }

    template <typename T>
    void templatedSomething(T param) {
        T copyParam = param;
    };
}