#include <iostream>
#include "ExampleClass.hpp"

int main()
{
    ExampleClass exampleClass{};
    std::cout << exampleClass.exampleMethod(ExampleClass::Width{7.7},
                                            ExampleClass::Height{9.97});
    std::cout << std::endl;

    return 0;
}
