#include <exception>
#include "Stack.h"
using namespace std;
Node::Node(int data) : m_data(data) {
    m_next = nullptr;
}

Stack::Stack() {
    m_top = nullptr;
}

void Stack::push(int data) {
    Node * toAdd = new Node(data);
    if (m_top != nullptr) {
        toAdd->m_next = m_top;
    }
    m_top = toAdd;
}

int Stack::pop() {
    if (m_top == nullptr) {
        throw exception();
    }
    int toReturn = m_top->m_data;
    Node * toDelete = m_top;
    m_top = m_top->m_next;
    delete toDelete;
    return toReturn;
}

Stack::~Stack() {
    Node * curr = m_top;
    while (curr != nullptr) {
        Node * toDelete = curr;
        curr = curr->m_next;
        delete toDelete;
    }
}
