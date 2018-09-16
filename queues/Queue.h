//
// Created by Ben Johnson on 9/16/18.
//

#ifndef STACKS_QUEUE_H
#define STACKS_QUEUE_H


class Queue {
public:
    Queue(int capacity);

    ~Queue();

    void enqueue(int data);
    int dequeue();
    bool isEmpty();
    bool isFull();
    void clear();

private:
    int size;
    int capacity;
    int start;
    int end;
    int *array;

};


#endif //STACKS_QUEUE_H
