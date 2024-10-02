

/*

prob:
Given a binary tree. Find the postorder traversal of the tree without using recursion. Return a list containing the postorder traversal of the tree, calculated without using recursion.

Link:-
https://www.geeksforgeeks.org/problems/postorder-traversal-iterative/1

*/
/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution{
    public:
    vector<int> postOrder(Node* node) {
        // code here
        //here the solution is done using two stack
        vector<int>ans;
        //edge case should be handeled
        if(node==nullptr) return ans;
        stack<Node*>tracker_01;
        stack<Node*>tracker_02;
        tracker_01.push(node);
        while(!tracker_01.empty()){
            Node* temp=tracker_01.top();
            tracker_01.pop();
            tracker_02.push(temp);
            if(temp->left!=nullptr) tracker_01.push(temp->left);
            if(temp->right!=nullptr) tracker_01.push(temp->right);
            
            
        }
        while(!tracker_02.empty()){
            ans.push_back(tracker_02.top()->data);
            tracker_02.pop();
        }
        
        
    }
};
