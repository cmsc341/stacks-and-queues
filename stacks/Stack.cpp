#ifndef STACK_CPP
#define STACK_CPP

#include "Stack.h"
// Tiffany mandate: topindex is where we put the next one
template <class InnerClass>
Stack<InnerClass>::Stack(int capacity) {
    this->capacity = capacity;
    array = new InnerClass[capacity];
    topIndex = 0;
}

template <class InnerClass>
Stack<InnerClass>::~Stack() {
    delete [] array;
    array = 0;
}

template <class InnerClass>
void Stack<InnerClass>::push(InnerClass i) {
    if (topIndex == capacity) {
        throw "students are overflowing with mad : (";
    }
    array[topIndex] = i;
    topIndex++;
}

template <class InnerClass>
InnerClass Stack<InnerClass>::pop() {
    if (topIndex == 0) {
        throw "For when there's nothing the stack -- desmond";
    }
    InnerClass output = array[topIndex - 1];
    topIndex--;
    return output;
}

#endif

