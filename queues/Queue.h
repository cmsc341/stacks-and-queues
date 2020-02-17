//
// Created by Ben Johnson on 9/16/18.
//

#ifndef STACKS_QUEUE_H
#define STACKS_QUEUE_H
template<class T>
class Queue;
template<class T>
class Node {
    Node(T data);

    Node * next;
    T data;
    friend Queue<T>;
};
template<class T>
class Queue {
public:
    Queue();

    ~Queue();

    void enqueue(T data);
    int dequeue();

private:
    Node<T> * front;
    Node<T> * back;

};
#include "Queue.cpp"

#endif //STACKS_QUEUE_H
