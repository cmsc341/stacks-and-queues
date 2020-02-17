//
// Created by Ben Johnson on 9/16/18.
//
#ifndef QCPP
#define QCPP
#include "Queue.h"
#include <iostream>

using namespace std;

template<class T>
Queue<T>::Queue() {
    // what does an empty queue look like?
    front = nullptr;
    back = nullptr;
}

template<class T>
Queue<T>::~Queue() {
    Node<T> * node = front;
    while (node != nullptr) {
        Node<T> *next = node->next;
        delete node;
        node = next;
    }
}

template<class T>
void Queue<T>::enqueue(T data) {
    Node<T> * node = new Node<T>(data);
    if (back != nullptr) {
        back->next = node;
    } else {
        front = node;
    }
    back = node;
}

template<class T>
int Queue<T>::dequeue() {
    if (front == nullptr) {
        throw range_error("Dis were empty");
    }
    T output = front->data;
    Node<T> * temp = front->next;
    delete front;
    front = temp;
    if (front == nullptr) {
        back = nullptr;
    }
    return output;
}

template<class T>
Node<T>::Node(T data) {
    this->data = data;
    this->next = nullptr;
}
#endif