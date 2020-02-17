//
// Created by Ben Johnson on 9/16/18.
//

#ifndef STACKS_QUEUE_H
#define STACKS_QUEUE_H
class Queue;
class Node {
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

private:
    Node * front;
    Node * back;

};


#endif //STACKS_QUEUE_H
