//
// Created by Ben Johnson on 9/16/18.
//
// Magdalene "Maggie" Proclaimation: start points to whatever was enqueued least recently, end points to whatever was enqueued most recently
#include "Queue.h"

Queue::Queue(int capacity) {
    array = new int[capacity];
    this->capacity = capacity;
    size = 0;
    start = -1;
    end = -1;
}

Queue::~Queue() {
    delete [] array;
    array = 0;
}


void Queue::enqueue(int data) {
    if (isEmpty()) {
        start++;
    }
    if (isFull()) {
        throw "no thanks, nerd";
    }
    end++;
    array[end] = data;
    size++;
}

int Queue::dequeue() {
    // we have to shift the array back to fill empty space
    if (isEmpty()) {
        throw "an exception";
    }
    start++;
    size--;
    for (int i = 0; i < size - 1; ++i) {
        array[i] = array[i + 1];
        // what the shift? O(1)
    }
    return 5;
}

