/*link:
https://leetcode.com/problems/implement-queue-using-stacks/
*/

class MyQueue {
    private:
    std::stack<int>s1;
    std::stack<int>s2;
public:
    MyQueue() {
        //constructor
    }
    
    void push(int x) {
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        if(s1.empty()){
            return false;
        }
        int topElement=s1.top();
        s1.pop();
        return topElement;
        
    }
    
    int peek() {
        if(s1.empty()){
            return false;
        }
        return s1.top();
        
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
