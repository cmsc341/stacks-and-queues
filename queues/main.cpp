#include <iostream>
#include "Queue.h"

void assert(bool expression);

using namespace std;

void assertTrue(bool expression) {
    if (expression) {
        cout << "Pass!" << endl;
    } else {
        cout << "Fail!" << endl;
    }
}


int main() {
    Queue q(10);
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(2);
    q.enqueue(8);
    int value = q.dequeue();
    assertTrue(value == 2);
    cout << value << endl; // prints 2
    value = q.dequeue();
    assertTrue(value == 4);
    for (int i = 0; i < 6; ++i) {
        q.enqueue(i);
    }
    assertTrue(q.dequeue() == 2);
    q.dequeue();
    q.dequeue();
    q.enqueue(1);
    q.enqueue(2);
    return 0;
}


