#include <iostream>
#include "Stack.h"

using namespace std;

void assertTrue(bool expression) {
    if (expression) {
        cout << "Pass!" << endl;
    } else {
        cout << "Fail!" << endl;
    }
}


int main() {
    Stack s;
    s.push(3);
    s.push(4);
    s.push(5);
    assertTrue(s.pop() == 5);
    assertTrue(s.pop() == 4);
    assertTrue(s.pop() == 3);
    try {
        s.pop();
        cout << "Failed!" << endl;
    } catch (exception ex) {
        cout << "Passed!" << endl;
    }
    return 0;
}

