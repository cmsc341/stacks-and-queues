#include <iostream>
#include "Queue.h"

using namespace std;

void testDeque(Queue<int> &q, int expected) {
    int valueReturned = q.dequeue();
    if (valueReturned == expected) {
        cout << "pass" << endl;
    } else {
        cout << "fail, expected " << expected << " got " << valueReturned << endl;
    }
}

int main() {
    Queue<int> q;
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(2);
    q.enqueue(8);
    testDeque(q, 2);
    testDeque(q, 4);
    testDeque(q, 2);
    testDeque(q, 8);
    q.enqueue(3);
    testDeque(q, 3);
    try {
        q.dequeue();
        cout << "Failed:  This line should not be reachable" << endl;
    } catch (exception ex) {
        cout << "Hi!  This is a good error!  Yay!" << endl;
    }
    return 0;
}

