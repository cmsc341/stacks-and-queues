#ifndef STACK_CPP
#define STACK_CPP

#include "Stack.h"
// Emma edict: topIndex points to the last item pushed
template <class InnerClass>
Stack<InnerClass>::Stack(int capacity) {
    array = new InnerClass[capacity];
    topIndex = -1;
    this->capacity = capacity;
}

template <class InnerClass>
Stack<InnerClass>::~Stack() {
    delete [] array;
    array = 0;
}

template <class InnerClass>
void Stack<InnerClass>::push(InnerClass i) {
    if (topIndex + 1 == capacity) {
        throw "can't push to a full stack, brah?";
    }
    topIndex++;
    array[topIndex] = i;
}

template <class InnerClass>
InnerClass Stack<InnerClass>::pop() {
    if (isEmpty()) {
        throw "Or return 0.";
    }
    topIndex--;
    return array[topIndex + 1];
}

template<class InnerClass>
bool Stack<InnerClass>::isEmpty() {
    return topIndex == -1;
}

#endif

