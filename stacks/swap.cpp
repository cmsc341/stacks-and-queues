#include <string>
#include <iostream>

template <class T>
void swapperino(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}

int main() {
    int x = 5000, y = 3;
    std::string n = "Julio", n2 = "Batman";
    swapperino(x, y);
    swapperino(n, n2);
    std::cout << n << n2 <<std::endl;
    return 0;
}