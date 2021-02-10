#ifndef STACKS_STACK_H
#define STACKS_STACK_H

class Stack;

class Node {
public:
    Node(int data);

private:
    friend Stack;
    int m_data;
    Node * m_next;
};

class Stack {
public:
    Stack();
    ~Stack();
    void push(int i);
    int pop();
    int top();
    bool isEmpty();
private:
    Node *m_top;
};


#endif //STACKS_STACK_H
