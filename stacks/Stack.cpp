#include <stdexcept>
#include "Stack.h"

using namespace std;

Stack::Stack(int capacity) {
  array = new int[capacity];
  this->capacity = capacity;
  topIndex = 0;  // <-- What is this ACTUALLY?!  It's the index where I would put a new item NOT where the top item is
}

Stack::~Stack() {
  delete array;
}

void Stack::push(int i) {
  if (topIndex == capacity) {
    throw range_error("Stack is full");
  }
  array[topIndex] = i;
  topIndex++;
}

int Stack::pop() {
  if (topIndex == 0) {
    throw range_error("Stack is empty!");
  }
  topIndex--;
  return array[topIndex];
}
