
Iterative Inorder
/*
prob:-
Given a binary tree. Find the inorder traversal of the tree without using recursion.

Link:-

https://www.geeksforgeeks.org/problems/inorder-traversal-iterative/1


*/
/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        //code here
        // inorder means :- left Root right
        Node* temp=root;
        
        vector<int>ans;
        stack<Node*>tracker;
        while(true){
            if(temp!=nullptr){
                tracker.push(temp);
                temp=temp->left;
            }
            else{
                if(tracker.empty()==true) break;
                temp=tracker.top();
                tracker.pop();
                ans.push_back(temp->data);
                temp=temp->right;
            }
            
        }
        return ans;
        
        
    }
