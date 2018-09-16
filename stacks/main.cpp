#include <iostream>
#include "Stack.h"

int main() {
    Queue s(10);
    s.push(3);
    s.push(4);
    s.push(5);
    std::cout << s.pop()  << std::endl;
    std::cout << s.pop()  << std::endl;
    std::cout << s.pop()  << std::endl;
    std::cout << s.pop()  << std::endl;
    return 0;
}

