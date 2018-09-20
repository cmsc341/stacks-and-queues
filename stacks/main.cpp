#include <iostream>
#include "Stack.h"

int main() {
    Stack<std::string> s(10);
    s.push("hi");
    s.push("there");
    s.push("class");
    std::cout << s.pop()  << std::endl;
    std::cout << s.pop()  << std::endl;
    std::cout << s.pop()  << std::endl;
    std::cout << s.pop()  << std::endl;
    return 0;
}

