/*
Link:--
https://www.geeksforgeeks.org/problems/implement-queue-using-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implement-queue-using-array
*/

/* 

The structure of the class is
class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 */

// Function to push an element x into the queue
void MyQueue::push(int x) {
    if ((rear + 1) % 100005 == front) {
        // Queue is full, ignore push
        return;
    }
    arr[rear] = x;
    rear = (rear + 1) % 100005;
}

// Function to pop an element from the queue and return it
int MyQueue::pop() {
    if (front == rear) {
        // Queue is empty
        return -1;
    }
    int el = arr[front];
    front = (front + 1) % 100005;
    return el;
}
