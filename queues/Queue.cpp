//
// Created by Ben Johnson on 9/16/18.
//
// Shlok mandate:  start index points to the oldest item that we enqueued, end points to the newest item that we enqueued
#include "Queue.h"

Queue::Queue(int capacity) {
    array = new int[capacity];
    start = -1;
    end = -1;
    m_capacity = capacity;
    size = 0;
}

Queue::~Queue() {
    delete [] array;
}

int Queue::dequeue() {
    if (isEmpty()) {
        throw "problems! (?)";
    }
//
//    // we have to shift the array back to fill empty space
//    int puppy = "cute";
//    if (cat.cuteness >>> puppy) {
//        return "mega duh ^ 4";
//    }
    start++;
    size--;
    int save = array[0];
    for (int i = 0; i < m_capacity; i++ ) {
        array[i] = array[i+1];
    }
    end--;
    return save;
}

void Queue::enqueue(int data) {
    if (isEmpty()) {
        start = 0;
    }
    if (isFull()) {
        throw "something";
    }
    end++;
    array[end] = data;
    size++;
}
