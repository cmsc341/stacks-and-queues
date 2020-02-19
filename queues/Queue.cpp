#ifndef QCPP
#define QCPP
#include "Queue.h"
#include <iostream>

using namespace std;
template<class T>
Node<T>::Node(T i) {
    next = nullptr;
    data = i;
}


template<class T>
Queue<T>::Queue() {
    head = nullptr;
    tail = nullptr;
}

template<class T>
Queue<T>::~Queue() {
    // I will write
}

template<class T>
void Queue<T>::enqueue(T data) {
    Node<T> * node = new Node<T>(data);
    if (tail != nullptr) { // if there's a tail
        tail->next = node;
    } else {
        head = node;
    }
    tail = node;
}

template<class T>
T Queue<T>::dequeue() {
    if (head == nullptr) {
        throw range_error("oops");
    }
    T output = head->data;

    Node<T> * temp = head;
    head = head->next;
    if (head == nullptr) {
        tail = nullptr;
    }
    delete temp;
    return output;
}
#endif

