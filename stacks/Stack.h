#ifndef STACKS_STACK_H
#define STACKS_STACK_H

template <class InnerClass>
class Stack {
public:
    Stack(int capacity);
    ~Stack();
    void push(InnerClass i);
    InnerClass pop();
    int top();
    bool isEmpty();
private:
    InnerClass* array;
    int topIndex;
    int m_capacity;

    bool isFull();
};

#include "Stack.cpp"

#endif //STACKS_STACK_H
