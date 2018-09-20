//
// Created by Ben Johnson on 9/20/18.
//

#include <iostream>

template<class T>
void swap(T &name, T &name2) {
    T temp = name;
    name = name2;
    name2 = temp;
}

int main() {
    std::string name = "Jeff";
    std::string name2 = "Jefferina";
    swap(name, name2);
    std::cout << name;
    return 0;
}