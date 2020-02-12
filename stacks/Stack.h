#ifndef STACKS_STACK_H
#define STACKS_STACK_H

template <typename T>
class Stack {
public:
    Stack(int capacity);
    ~Stack();
    void push(T i);
    T pop();
    T top();
    bool isEmpty();
private:
    T* array;
    int topIndex;
    int cap;
};

#include "Stack.cpp"

#endif //STACKS_STACK_H
