#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

// Node structure to represent each element of the stack
struct Node {
    int data;
    Node* next;
};

// Stack class definition
class Stack {
private:
    Node* top;  // Points to the top of the stack

public:
    // Constructor
    Stack() : top(nullptr) {}

    // Destructor to clean up memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    // Push an element onto the stack
    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;  // New node points to the current top
        top = newNode;        // Top points to the new node
    }

    // Pop an element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }

        Node* temp = top;
        top = top->next;  // Move top to the next element
        delete temp;      // Free the memory of the popped element
    }

    // Peek at the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;  // Return a sentinel value if the stack is empty
        }
        return top->data;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Print the elements of the stack
    void printStack() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

#endif
