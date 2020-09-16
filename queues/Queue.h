//
// Created by Ben Johnson on 9/16/18.
//

#ifndef STACKS_QUEUE_H
#define STACKS_QUEUE_H

class Queue;

class Node {
private:
  Node(int data);

  Node * next;
  int data;
  friend Queue;
};

class Queue {
public:
    Queue();

    ~Queue();

    void enqueue(int data);
    int dequeue();
    bool isEmpty();
    bool isFull();
    void clear();

private:
  Node * head, * tail;

};


#endif //STACKS_QUEUE_H
