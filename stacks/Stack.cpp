#include "Stack.h"
// Tiffany mandate: topindex is where we put the next one
Stack::Stack(int capacity) {
    this->capacity = capacity;
    array = new int[capacity];
    topIndex = 0;
}

Stack::~Stack() {
    delete [] array;
    array = 0;
}

void Stack::push(int i) {
    if (topIndex == capacity) {
        throw "students are overflowing with mad : (";
    }
    array[topIndex] = i;
    topIndex++;
}

int Stack::pop() {
    if (topIndex == 0) {
        throw "For when there's nothing the stack -- desmond";
    }
    int output = array[topIndex - 1];
    topIndex--;
    return output;
}


