#pragma once

namespace TemplateTests {

    void doTemplateStuff();
    void benchTemplates();

    void dontTemplateSomething(int param);
    void dontTemplateSomething(float param);

    template <typename T>
    void templatedSomething(T param);
}