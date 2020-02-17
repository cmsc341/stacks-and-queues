#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    Queue<int> q;
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(2);
    q.enqueue(8);
    if (q.dequeue() == 2) {
        cout << "dq pass" << endl;
    } else {
        cout << "dq fail" << endl;
    }
    q.dequeue();
    q.enqueue(3);
    if (q.dequeue() == 2) {
        cout << "dq pass" << endl;
    } else {
        cout << "dq fail" << endl;
    }

    q.dequeue();
    q.dequeue();
    try {
        q.dequeue();
        cout << "Failed!  No exception thrown!" << endl;
    } catch (exception e) {

        cout << "Passed: error thrown" << endl;
    }
    return 0;
}

