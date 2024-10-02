



/*

prob:-
Given a Binary tree. Find the preorder traversal of the tree without using recursion.


Link:-
https://www.geeksforgeeks.org/problems/preorder-traversal-iterative/1


*/
/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
*/
class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        //code here
        vector<int>ans;
        stack<Node*>tracker;
        tracker.push(root);
        while(!tracker.empty()){
            Node* temp=tracker.top();
            tracker.pop();
            ans.push_back(temp->data);
            if(temp->right!=nullptr) tracker.push(temp->right);
            if(temp->left!=nullptr) tracker.push(temp->left);
            
        }
        return ans;
    }
};
