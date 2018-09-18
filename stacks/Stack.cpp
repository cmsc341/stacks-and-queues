#include "Stack.h"

// Yamna supreme edict: topIndex points to the most recently pushed item

Stack::Stack(int capacity) {
    array = new int[capacity];
    topIndex = -1;
    m_capacity = capacity;
}

Stack::~Stack() {
    delete [] array;
    array = 0;
}

void Stack::push(int i) {
    if (isFull()){
        throw "oops";
    }
    topIndex++;
    array[topIndex] = i;
}

int Stack::pop() {
    if (isEmpty()) {
        throw "this is a great badness for my people";
    }
    int output = array[topIndex];
    topIndex--;

    return output;
}





