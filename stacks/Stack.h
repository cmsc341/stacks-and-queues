#ifndef STACKS_STACK_H
#define STACKS_STACK_H


class Queue {
public:
    Queue(int capacity);
    virtual ~Queue();
    void push(int i);
    int pop();
    int top();
    bool isEmpty();
private:
    int* array;
    int topIndex;
};


#endif //STACKS_STACK_H
