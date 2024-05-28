#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
    vector<int> elements;

public:
    // Push: Adds an element to the top of the stack
    void push(int data) {
        elements.push_back(data);
    }

    // Pop: Removes and returns the element at the top of the stack
    int pop() {
        if (elements.empty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return -1; // Indicating an error
        }
        int topElement = elements.back();
        elements.pop_back();
        return topElement;
    }

    // Peek: Returns the element at the top of the stack without removing it
    int peek() {
        if (elements.empty()) {
            cout << "Stack is empty. Cannot peek." << endl;
            return -1; // Indicating an error
        }
        return elements.back();
    }

    // Size: Returns the number of elements in the stack
    int size() const {
        return elements.size();
    }

    // IsEmpty: Checks if the stack is empty
    bool isEmpty() const {
        return elements.empty();
    }
};

int main() {
    Stack stack;

    // Demonstrating the push operation
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // Demonstrating the size operation
    cout << "Current stack size: " << stack.size() << endl;

    // Demonstrating the peek operation
    cout << "Element at the top of the stack: " << stack.peek() << endl;

    // Demonstrating the pop operation
    cout << "Popped element: " << stack.pop() << endl;
    cout << "Element at the top after pop: " << stack.peek() << endl;

    // Checking if the stack is empty
    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    // Demonstrating the pop operation until the stack is empty
    cout << "Popping all elements:" << endl;
    while (!stack.isEmpty()) {
        cout << "Popped element: " << stack.pop() << endl;
    }

    // Checking if the stack is empty after popping all elements
    cout << "Is stack empty after popping all elements? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
