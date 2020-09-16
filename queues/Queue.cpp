//
// Created by Ben Johnson on 9/16/18.
//

#include <stdexcept>
#include "Queue.h"
using namespace std;
Queue::Queue() {
  head = nullptr;
  tail = nullptr;
}

Queue::~Queue() {
  // lolo
}

int Queue::dequeue() {
  Node * output = head;
  if (head == nullptr) {
    throw range_error("Empty queue");
  }
  if (head == tail) {
    head = nullptr;
    tail = nullptr;
  } else {
    head = head->next;
  }
  int outputData = output->data;
  delete output;
  return outputData;
}

void Queue::enqueue(int data) {
  Node * newNode = new Node(data);
  if (head == tail and head == nullptr) {
    head = newNode;
    tail = newNode;
  } else {
    tail->next = newNode;
    tail = newNode;
  }
}

Node::Node(int data) {
  next = nullptr;
  this->data = data;
}
