//
// Created by Ben Johnson on 9/16/18.
//

#include <stdexcept>
#include "Queue.h"

Queue::Queue() {
    head = nullptr;
    tail = nullptr;
}

Queue::~Queue() {
    Node * curr = head;
    while (curr != nullptr) {
        Node * temp = curr->next;
        delete curr;
        curr = temp;
    }
}

void Queue::enqueue(int data) {
    Node * toInsert = new Node(data);
    if (head == nullptr) {
        head = toInsert;
        tail = toInsert;
        return;
    }
    tail->next = toInsert;
    tail = toInsert;

}

int Queue::dequeue() {
    if (isEmpty()) {
        throw std::out_of_range("NOthing to dequeue!");
    }
    // do something with the head pointer
    Node * temp = head;
    head = head->next;
    int tempData = temp->data;
    delete temp;
    return tempData;
}

bool Queue::isFull() {
    return false;
}

bool Queue::isEmpty() {
    return head == nullptr;
}

Node::Node(int i) {
    data = i;
    next = nullptr;
}

Node::~Node() {

}
