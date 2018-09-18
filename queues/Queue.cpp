//
// Created by Ben Johnson on 9/16/18.
//

#include "Queue.h"
// the keara agenda: start is the index of the oldest item, end is the index of the newest item
Queue::Queue(int capacity) {
    array = new int[capacity];
    start = -1;
    end = -1;
    this->capacity = capacity;
    this->size = 0;
}

Queue::~Queue() {
    delete [] array;
    array = 0;
}

int Queue::dequeue() {
    // we have to shift the array back to fill empty space
    if (isEmpty()) {
        throw "Data ain't here, man";
    }
    int output = array[start];
    start++;
    size--;
    for (int i = capacity - 1; i >= 0 ; --i) {
        // I leave as an exercise for someone who isn't lazy
    }
    return output;
}

void Queue::enqueue(int data) {
    if (isFull()) {
        throw "gah, no!";
    }
    array[end + 1] = data;
    end++;
    size++;
}
