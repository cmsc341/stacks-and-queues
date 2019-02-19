#include <exception>
#include "Stack.h"
#include <stdexcept>

using namespace std;

Stack::Stack(int capacity) {
    array = new int[capacity];
    topIndex = 0;
    cap = capacity;
}

Stack::~Stack() {
    delete [] array;
}

void Stack::push(int i) {
    if (topIndex == cap) {
        throw std::out_of_range("Too much there");
    }
    // put the value in
    array[topIndex] = i;
    topIndex++;
}

int Stack::pop() {
    if(isEmpty()) {
        throw std::out_of_range("No no.  All gone.");
    }
    // take the value out
    int value = array[topIndex-1];
    // maybe do something else?
    topIndex--;
    // return it
    return value;
}

int Stack::top() {
    if(isEmpty()) {
        throw std::out_of_range("No no.  All gone.");
    }
    // take the value out
    int value = array[topIndex-1];
    // return it
    return value;
}

bool Stack::isEmpty() {
    return topIndex == 0;
}
