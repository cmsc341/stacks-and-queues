#ifndef STACKS_STACK_H
#define STACKS_STACK_H

template <class InnerClass>
class Stack {
public:
    Stack(int capacity);
    ~Stack();
    void push(InnerClass i);
    InnerClass pop();
    InnerClass top();
    bool isEmpty();
private:
    int capacity;
    InnerClass* array;
    int topIndex;
};

#include "Stack.cpp"

#endif //STACKS_STACK_H
