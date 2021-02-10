//
// Created by Ben Johnson on 9/16/18.
//

#include <exception>
#include "Queue.h"

Queue::Queue(int capacity) {
    array = new int[capacity];
    this->capacity = capacity;
    start = 0;
    end = 0;
    size = 0;
}

Queue::~Queue() {
    delete [] array;
}

int Queue::dequeue() {
    int toReturn = array[start];
    start++;
    size--;
    return toReturn;
}

void Queue::enqueue(int data) {
    if (size == capacity) {
        throw std::exception();
    }
    array[end] = data;
    end++;
    size++;
}
