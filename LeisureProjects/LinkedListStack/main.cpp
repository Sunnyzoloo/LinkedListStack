#include <iostream>
#include "Stack.h"

int main() {
    Stack stack;

    // Pushing elements onto the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    // Print the stack
    cout << "Current stack: ";
    stack.printStack();

    // Peek the top element
    cout << "Top element: " << stack.peek() << endl;

    // Pop an element from the stack
    stack.pop();
    cout << "Stack after popping an element: ";
    stack.printStack();

    // Pop all elements
    stack.pop();
    stack.pop();
    stack.pop();
    stack.printStack();  // Should show "Stack is empty!"

    return 0;
}
