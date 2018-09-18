#ifndef STACKS_STACK_H
#define STACKS_STACK_H


class Stack {
public:
    Stack(int capacity);
    virtual ~Stack();
    void push(int i);
    int pop();
    int top();
    bool isEmpty();
private:
    int capacity;
    int* array;
    int topIndex;
};


#endif //STACKS_STACK_H
