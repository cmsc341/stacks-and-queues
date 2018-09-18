#include "Stack.h"
// Emma edict: topIndex points to the last item pushed
Stack::Stack(int capacity) {
    array = new int[capacity];
    topIndex = -1;
    this->capacity = capacity;
}

Stack::~Stack() {
    delete [] array;
    array = 0;
}

void Stack::push(int i) {
    if (topIndex + 1 == capacity) {
        throw "can't push to a full stack, brah?";
    }
    topIndex++;
    array[topIndex] = i;
}

int Stack::pop() {
    if (isEmpty()) {
        throw "Or return 0.";
    }
    topIndex--;
    return array[topIndex + 1];
}



