/*

Link:--  https://www.geeksforgeeks.org/problems/implement-stack-using-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implement-stack-using-array

*/

/*
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

void MyStack::push(int x) {
    if (top >= 999) { // Check for stack overflow
       // cout << "Stack Overflow" << endl;
        return;
    }
    top = top + 1;
    arr[top] = x;
}

// Function to remove an item from the top of the stack
int MyStack::pop() {
    if (top == -1) { // Check for stack underflow
     //   cout << "Stack Underflow" << endl;
        return -1;
    }
    int poppedValue = arr[top];
    top = top - 1;
    return poppedValue;
}
