#include <string>
#include <iostream>

using namespace std;

template <class T>
void swapperino(T &n, T &n2) {
    T temp = n;
    n = n2;
    n2 = temp;
}

int main() {
    string name = "Pie";
    string name2 = "Mariah";
    cout << name << name2 <<endl;
    swapperino(name, name2);
    int i = 5;
    int j = 7;
    swapperino(i, j);
    i++;
    cout << i << j <<endl;
    return 0;
}
