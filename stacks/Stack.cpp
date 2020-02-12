#ifndef STACK_CPP_BURGERS
#define STACK_CPP_BURGERS
#include <exception>
#include "Stack.h"
#include <stdexcept>

using namespace std;

template<typename T>
Stack<T>::Stack(int capacity) {
    array = new T[capacity];
    topIndex = 0;
    cap = capacity;
}

template<typename T>
Stack<T>::~Stack() {
    delete [] array;
}

template<typename T>
void Stack<T>::push(T i) {
    if (topIndex == cap) {
        throw std::out_of_range("Too much there");
    }
    // put the value in
    array[topIndex] = i;
    topIndex++;
}

template<typename T>
T Stack<T>::pop() {
    if(isEmpty()) {
        throw std::out_of_range("No no.  All gone.");
    }
    // take the value out
    T value = array[topIndex-1];
    // maybe do something else?
    topIndex--;
    // return it
    return value;
}

template<typename T>
T Stack<T>::top() {
    if(isEmpty()) {
        throw std::out_of_range("No no.  All gone.");
    }
    // take the value out
    T value = array[topIndex-1];
    // return it
    return value;
}

template<typename T>
bool Stack<T>::isEmpty() {
    return topIndex == 0;
}

#endif