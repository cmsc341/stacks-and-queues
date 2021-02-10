//
// Created by Ben Johnson on 9/16/18.
//

#include <exception>
#include "Queue.h"

Queue::Queue(int capacity) {
    array = new int[capacity];
    start = 0;
    end = 0;
    size = 0;
}

Queue::~Queue() {

}

int Queue::dequeue() {
    // we have to shift the array back to fill empty space
    return 0;
}

void Queue::enqueue(int data) {
    if (size == capacity) {
        throw std::exception();
    }
    array[end] = data;
    end++;
    size++;
}
