//
// Created by Ben Johnson on 9/16/18.
//

#ifndef STACKS_QUEUE_H
#define STACKS_QUEUE_H

template<class T>
class Node {
public:
    Node(T i);


    Node * next;
    T data;
};


template<class T>
class Queue {
public:
    Queue();

    ~Queue();

    void enqueue(T data);
    T dequeue();

private:
    Node<T> *head, *tail;

};


#include "Queue.cpp""

#endif //STACKS_QUEUE_H
