#ifndef STACKS_STACK_H
#define STACKS_STACK_H


class Stack {
public:
    Stack(int capacity);
    ~Stack();
    void push(int i);
    int pop();
    int top();
    bool isEmpty();
private:
    int* array;
    int topIndex;
    int capacity;
};


#endif //STACKS_STACK_H
