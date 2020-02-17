//
// Created by Ben Johnson on 9/16/18.
//

#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue() {
    // what does an empty queue look like?
    front = nullptr;
    back = nullptr;
}

Queue::~Queue() {
    Node * node = front;
    while (node != nullptr) {
        Node *next = node->next;
        delete node;
        node = next;
    }
}

void Queue::enqueue(int data) {
    Node * node = new Node(data);
    if (back != nullptr) {
        back->next = node;
    } else {
        front = node;
    }
    back = node;
}

int Queue::dequeue() {
    if (front == nullptr) {
        throw range_error("Dis were empty");
    }
    int output = front->data;
    Node * temp = front->next;
    delete front;
    front = temp;
    if (front == nullptr) {
        back = nullptr;
    }
    return output;
}

Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}
