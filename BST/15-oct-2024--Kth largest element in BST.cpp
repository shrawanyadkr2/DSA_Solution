
/*
Link:-
https://www.geeksforgeeks.org/problems/kth-largest-element-in-bst/1

prob:
Given a Binary Search Tree. Your task is to complete the function which will return the Kth largest element without doing any modification in Binary Search Tree.



*/


struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
    private:
    void inorder(Node* root,vector<int>&ans){
        if(root==nullptr) return;
        
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    public:
    int kthLargest(Node *root, int K)
    {
        //Your code here
        vector<int>ans;
        inorder(root,ans);
        if(K>ans.size()) return -1;
        return ans[ans.size()-K];
    }
};
