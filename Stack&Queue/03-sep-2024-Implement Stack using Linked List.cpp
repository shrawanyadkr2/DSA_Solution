/*
Link:-
https://leetcode.com/problems/implement-stack-using-queues/
*/

class MyStack {
  private:
    StackNode *top;
    int size=0;
public:
    // MyStack() : top(nullptr), size(0) {}

    void push(int x) {
        StackNode* temp = new StackNode(x);
        temp->next = top;
        top = temp;
        size++;
    }

    int pop() {
        if (top == nullptr) {
          return -1;
        }
        StackNode* temp = top;
        int poppedValue = temp->data;
        top = top->next;
        delete temp;
        size--;
        return poppedValue;
    }

    MyStack() { top = NULL; }
};
