#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    Queue q(10);
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(2);
    q.enqueue(8);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    q.enqueue(3);
    cout << q.dequeue() << endl;
    return 0;
}

