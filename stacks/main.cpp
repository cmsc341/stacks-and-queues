#include <iostream>
#include "Stack.h"

int main() {
    Stack<int> s(10);

    std::cout << (s.isEmpty() ? "True" : "False") << std::endl;
    s.push(3);
    s.push(4);
    s.push(5);
    std::cout << (s.isEmpty() ? "True" : "False") << std::endl;
    std::cout << s.top() << std::endl;
    std::cout << s.pop() << std::endl;
    std::cout << s.pop() << std::endl;
    std::cout << s.pop() << std::endl;
    std::cout << (s.isEmpty() ? "True" : "False") << std::endl;

    try {
        std::cout << s.pop() << std::endl;
    } catch (std::exception ex) {
        std::cout << "I want to see this." << std::endl;
    }
    return 0;
}

