#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    Queue q(10);
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(2);
    q.enqueue(8);
    int value = q.dequeue();
    if (value == 2) {
        cout << "Pass!" << endl;
    } else {
        cout << "Fail!" << endl;
    }
    cout << value << endl; // prints 2
    if (value == 4) {
        cout << "Pass!" << endl;
    } else {
        cout << "Fail!" << endl;
    }
    q.enqueue(3);
    cout << q.dequeue() << endl;
    return 0;
}

