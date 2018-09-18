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
    int* array;
    int topIndex;
    int m_capacity;
};


#endif //STACKS_STACK_H
