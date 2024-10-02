/*
Link:-->
https://www.naukri.com/code360/problems/stack-implementation-using-array_3210209?leftPanelTabValue=SUBMISSION
*/

// Stack class.
class Stack {

    
public:
    int* arr;       // Pointer to the stack array
    int topIndex;   // Index of the top element
    int capacity;   // Maximum capacity of the stack



    // Constructor to initialize the stack with a given capacity
    Stack(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];  // Dynamically allocate memory for the stack
        topIndex = -1;            // Initialize topIndex to -1 to indicate the stack is empty
    }

    // Destructor to clean up dynamically allocated memory
    // ~Stack() {
    //     delete[] arr;  // Free the allocated memory
    // }

    // Function to push an element onto the stack
    void push(int num) {
        if (isFull()) {
            //std::cout << "Stack Overflow" << std::endl;
            return;
        }
        arr[++topIndex] = num;  // Increment topIndex and add the element
    }

    // Function to remove and return the top element of the stack
    int pop() {
        if (isEmpty()) {
            //std::cout << "Stack Underflow" << std::endl;
            return -1;  // Return -1 if the stack is empty
        }
        return arr[topIndex--];  // Return the top element and decrement topIndex
    }
    
    // Function to return the top element without removing it
    int top() {
        if (isEmpty()) {
           // std::cout << "Stack is empty" << std::endl;
            return -1;  // Return -1 if the stack is empty
        }
        return arr[topIndex];  // Return the top element
    }
    
    // Function to check if the stack is empty
    int isEmpty() {
        return topIndex == -1;  // Stack is empty if topIndex is -1
    }
    
    // Function to check if the stack is full
    int isFull() {
        return topIndex == capacity - 1;  // Stack is full if topIndex is at the last index
    }
};
