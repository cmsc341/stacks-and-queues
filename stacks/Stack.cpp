#ifndef hotdogs
#define hotdogs
#include "Stack.h"

// Yamna supreme edict: topIndex points to the most recently pushed item

template <class InnerClass>
Stack<InnerClass>::Stack(int capacity) {
    array = new InnerClass[capacity];
    topIndex = -1;
    m_capacity = capacity;
}

template <class InnerClass>
Stack<InnerClass>::~Stack() {
    delete [] array;
    array = 0;
}

template <class InnerClass>
void Stack<InnerClass>::push(InnerClass i) {
    if (isFull()){
        throw "oops";
    }
    topIndex++;
    array[topIndex] = i;
}

template <class InnerClass>
InnerClass Stack<InnerClass>::pop() {
    if (isEmpty()) {
        throw "this is a great badness for my people";
    }
    InnerClass output = array[topIndex];
    topIndex--;

    return output;
}

template <class InnerClass>
bool Stack<InnerClass>::isFull() {
    return topIndex == m_capacity - 1;
}

template <class InnerClass>
bool Stack<InnerClass>::isEmpty() {
    return topIndex == -1;
}

#endif




